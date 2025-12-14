/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26904
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
    var_17 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)26551)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((var_18), (max((max((arr_10 [i_2 - 1] [i_2]), (arr_10 [i_2 - 1] [i_2 - 1]))), (max((arr_10 [i_2 - 1] [i_3]), (((/* implicit */int) var_11))))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1])) ? (arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1]) : (arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1])))))));
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_0] [(_Bool)1] [i_3 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_4 [i_3 - 1])))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(short)7]))) * (arr_6 [i_1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((signed char) arr_12 [i_0] [i_1] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) min((arr_7 [i_2 - 1] [i_3 - 2] [i_3 - 1]), (((/* implicit */int) arr_11 [i_3] [i_3] [i_0] [i_3])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) ((max((((/* implicit */long long int) arr_10 [i_0] [i_0])), (arr_4 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)149)) : (-1078002559)));
                                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5])) | (var_13)))) | (((arr_1 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_6] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_5])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))))))));
                                arr_20 [i_6] [(short)6] [i_4] [i_4] [i_6] [i_6] [i_4] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_5 [i_6]))))))) < (((/* implicit */int) max((arr_5 [i_6]), ((!(((/* implicit */_Bool) -1078002559)))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) max((max((var_15), (arr_16 [i_1]))), (((/* implicit */unsigned short) ((short) var_13))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (((arr_14 [i_0] [i_1] [i_1] [i_1]) - (var_3))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            {
                var_26 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((((/* implicit */int) var_2)) & (((/* implicit */int) arr_22 [i_7])))), (((int) (unsigned char)155))))), (((((((/* implicit */_Bool) arr_17 [(signed char)7] [i_7] [i_8] [i_8] [i_8])) ? (arr_26 [i_7] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_18 [i_8] [i_7] [i_8]))))))))));
                var_27 = ((/* implicit */signed char) max(((((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((((/* implicit */_Bool) var_2)) ? (arr_14 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7]))))) - (703381753U))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_0)))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (short)-32080)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))))));
                var_28 = ((/* implicit */unsigned int) min((var_28), (((unsigned int) max((((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [i_7])))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (700595227U))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max(((-(max((var_3), (((/* implicit */unsigned int) (unsigned char)2)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))))))));
}
