/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4180
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) var_8);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 1]))))));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)18420))))) ? (max((1726048355107264471ULL), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0 + 1]), (arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0 - 1])))) : (((((/* implicit */_Bool) (unsigned short)47115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((-(18071508978452417814ULL)))))));
        }
        arr_6 [i_0 - 1] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) arr_2 [(unsigned short)10] [(short)3])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (18071508978452417814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) & (((/* implicit */unsigned long long int) arr_5 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) || (((/* implicit */_Bool) arr_5 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 + 1])))));
                    var_13 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(unsigned short)6]);
                    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18420))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (arr_1 [i_0 + 1] [i_0 - 1]));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) var_0);
                                var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) & (max((((((/* implicit */int) (unsigned short)33806)) * (((/* implicit */int) arr_4 [i_0] [13U] [(unsigned char)16])))), (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) max(((unsigned short)47116), (((/* implicit */unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)31729)) : (-1430374052))))) : ((-(((/* implicit */int) var_1))))));
    }
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((112527976355549952ULL), (1726048355107264471ULL)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned int) var_6))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2126474237432733181LL)) ? (62914560ULL) : (18334216097354001663ULL)))) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)56264))))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((unsigned long long int) var_5))))));
    var_20 = ((/* implicit */signed char) ((unsigned short) var_9));
}
