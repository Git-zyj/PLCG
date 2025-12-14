/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238101
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (signed char)-104)) ? (2199023255551LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_2] [i_2 + 1]))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_8)), (4460997697332006388ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), ((+(2348435808755094911ULL)))));
                                arr_11 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((((/* implicit */int) arr_8 [i_0])) - (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [(unsigned char)0])))) + (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2])))) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_18 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_5]))))) ? (7484279427987116335LL) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_9))))))));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_2 + 1]))))) + (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (var_10))), (((/* implicit */unsigned long long int) ((short) var_7)))))));
                        var_20 = ((/* implicit */unsigned long long int) ((short) arr_10 [i_0] [(unsigned char)10] [i_2 - 1] [i_2 - 2] [i_2 - 2]));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_2] [i_6 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [7LL]))))) ? (((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_11))))))))));
                        var_23 = min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0])))))), (((max((var_2), (((/* implicit */unsigned long long int) (unsigned short)2)))) & (((/* implicit */unsigned long long int) (~(var_4)))))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)65515);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_6))));
    var_25 = ((/* implicit */signed char) var_5);
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) (short)-20414)) : (((/* implicit */int) (unsigned char)34))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_3))))) + ((-(var_10)))))));
}
