/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36851
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)2)) : (var_0)))) > ((+(var_9))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7034339412487004920LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_0))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [(short)5])) + (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(arr_0 [i_1])))) - (((((/* implicit */unsigned int) var_7)) - (var_3)))));
                    var_13 = ((/* implicit */short) arr_7 [i_1 - 3] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) > (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (short)-29775))));
                            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_11 [i_1 - 1] [i_3 - 2] [i_4 + 4] [i_3 - 2] [i_4]))));
                        }
                        var_16 += ((/* implicit */unsigned short) var_9);
                        var_17 = ((/* implicit */unsigned int) (unsigned short)60577);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) < (10771707044667911044ULL)));
                    }
                    for (short i_5 = 4; i_5 < 12; i_5 += 4) 
                    {
                        arr_17 [i_0] [(short)3] [(unsigned char)2] [i_2] [i_0] &= ((/* implicit */short) (-(((((/* implicit */_Bool) -1)) ? (1952590602847586457LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))))));
                        var_19 = ((/* implicit */unsigned long long int) -1513528298);
                    }
                    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [8LL] [i_1 - 1] [i_0] [7U]))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) arr_19 [i_6]);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)46)) || (((((((/* implicit */int) (signed char)29)) + (arr_19 [i_6]))) < (((/* implicit */int) (signed char)-32))))));
        arr_22 [i_6] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)20274)), (4294967295U)));
        arr_23 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    }
    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (var_9))) : (((/* implicit */unsigned long long int) var_5))));
}
