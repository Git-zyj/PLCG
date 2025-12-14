/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233075
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
    var_11 = ((/* implicit */long long int) (((-(var_4))) - (var_1)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2132587494)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (13726913512528681264ULL)))))) ? (((/* implicit */int) ((1080863910568919040LL) > (((/* implicit */long long int) max((228341602U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))))) : ((-((+(((/* implicit */int) (unsigned short)11682)))))));
        var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) -201076085)) ? (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58863)))) : (1223051614)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (1452633040) : (((/* implicit */int) arr_0 [i_1 + 2])))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))) - (42168)))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                    var_14 |= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)40740), (var_2))))) + (4294967275U)))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(4806033760104535LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (((~(var_9))) - (((/* implicit */long long int) ((unsigned int) arr_14 [i_1 + 1] [i_3] [i_2] [i_3] [i_4] [i_0] [i_4])))));
                                arr_15 [i_3] [i_1 + 3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((3650728693U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1790747826))))))));
                                arr_16 [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((-3015417794677652433LL) / (((/* implicit */long long int) 1104490921)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_4] [i_1 + 3] [i_1 + 3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
