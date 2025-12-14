/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199323
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2444756685659369027LL)) ? (3126962957U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-77)) ^ (((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))));
        var_19 *= ((/* implicit */short) (-(((((/* implicit */_Bool) 1502144277)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) <= (12702246884473076979ULL))))) : (5744497189236474637ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] [i_1] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_17)) ? (2444756685659369027LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_0);
                        var_21 = ((/* implicit */signed char) (+(arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 - 2])));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((-(12702246884473076984ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_23 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-3309))))));
                    }
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 3126962988U)) ? (((/* implicit */int) (short)31391)) : (((/* implicit */int) (signed char)3)))) > (((/* implicit */int) (!(((/* implicit */_Bool) 1168004339U)))))))) : ((-(((/* implicit */int) arr_11 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (2712605892U) : (((/* implicit */unsigned int) arr_13 [i_4] [i_4]))))) ? (-898012889) : (((/* implicit */int) var_18)));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (int i_6 = 4; i_6 < 22; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) 9663989056358888348ULL);
                        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_7] [i_6] [(signed char)2] [10U]))))) ? ((~(((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_5] [i_7])) : (arr_13 [i_6] [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 1] [i_6 - 2]))) : (1386083199U)));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((1168004308U) == (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(short)22] [i_6 - 4]))))))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) 3126962956U);
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_17 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) arr_18 [i_4] [i_4] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [(signed char)19] [i_4] [i_4] [(unsigned char)20])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)(-32767 - 1))))))))) ? (var_9) : ((~(((arr_22 [14LL] [i_4] [i_4] [(signed char)12] [i_4] [(signed char)12]) & (((/* implicit */unsigned long long int) var_10))))))));
    }
    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
}
