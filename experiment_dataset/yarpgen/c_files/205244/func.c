/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205244
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 776215685U))));
                var_18 = ((/* implicit */short) (unsigned char)49);
                arr_6 [i_1] = ((/* implicit */unsigned char) min((3518751610U), (min((((/* implicit */unsigned int) (unsigned char)49)), (1732786932U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_0);
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)33)) <= (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_10))) && (((/* implicit */_Bool) ((signed char) 474501574463679961LL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 7; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */int) ((unsigned char) 2729049U));
        arr_10 [i_2 - 1] = ((/* implicit */unsigned short) 11557987054329259553ULL);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        for (short i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 6502877477160285812LL))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-24513))))))))));
                                var_23 = var_10;
                                arr_25 [i_4] [i_4] = (!(((/* implicit */_Bool) ((unsigned char) arr_20 [i_3] [i_4] [i_6 + 2] [i_7 - 2]))));
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_4] [19LL] = ((/* implicit */unsigned short) max((((((/* implicit */int) (short)4310)) / (((((/* implicit */_Bool) 3832973764974275131LL)) ? (1331565861) : (((/* implicit */int) (short)-22627)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (4292238246U)))) ? ((~(((/* implicit */int) arr_17 [i_3] [i_4 - 1] [i_5])))) : (((/* implicit */int) arr_15 [10U] [i_5 + 2] [i_5]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned short)30686))));
    }
}
