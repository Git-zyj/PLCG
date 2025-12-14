/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243170
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) var_13))) <= (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (1823658381U))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((unsigned int) arr_0 [i_0])) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_15 += ((/* implicit */signed char) var_1);
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_11 [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((int) arr_4 [i_1])));
                    var_16 = ((/* implicit */int) ((unsigned short) (short)23172));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (short)16114))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)9820)) ? (((/* implicit */int) (_Bool)1)) : (-1393233611))))))));
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */int) arr_13 [i_4]);
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (long long int i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_12 [i_4])) << (((((((/* implicit */_Bool) -978239268)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (3889511085678632396ULL))) - (18446744073709544585ULL))))));
                    var_20 = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_8))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned int) ((unsigned short) (~(var_2))));
    }
    for (int i_7 = 3; i_7 < 19; i_7 += 4) 
    {
        arr_22 [i_7] = ((/* implicit */int) var_12);
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1153605583))));
        arr_23 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((arr_17 [i_7 - 3] [i_7 - 3]), (arr_17 [i_7 + 1] [i_7 + 1])))) != (max((((/* implicit */unsigned long long int) -1745396686)), (3889511085678632394ULL)))));
    }
    var_23 = ((/* implicit */short) max((-1118253036), (1118253019)));
    var_24 += var_5;
    var_25 *= ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (var_2)));
}
