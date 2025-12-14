/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225998
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
    var_15 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)24847))))) != (((4294967295U) >> (((((/* implicit */int) (unsigned short)54481)) - (54455)))))))), (((8191U) >> (((var_5) - (1595944419U)))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) ((short) (signed char)38))) : (((((/* implicit */int) (unsigned short)47427)) - (((/* implicit */int) (unsigned short)21873)))))) + (((/* implicit */int) var_13))));
                    arr_11 [i_0] [(unsigned short)3] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)47427)))) != ((+(((/* implicit */int) (signed char)93))))));
                    arr_12 [i_0] [i_2 + 3] = ((/* implicit */unsigned short) (~(((long long int) (unsigned short)29836))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    arr_15 [i_1 + 2] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)18108))));
                    arr_16 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) (unsigned short)18109)))));
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) == (((/* implicit */int) ((signed char) 63U)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18108)) != (((/* implicit */int) ((((/* implicit */_Bool) 4095U)) && (((/* implicit */_Bool) var_12)))))));
                                arr_23 [i_0] [i_3] [i_0] [i_5 - 2] = ((/* implicit */unsigned int) (unsigned short)65535);
                                arr_24 [i_4] [i_3] [(unsigned short)4] = ((/* implicit */unsigned short) ((4294963201U) - (4294967295U)));
                                arr_25 [i_0] [i_1] [i_1] [i_4] [i_1 - 1] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)31761)) ^ (((/* implicit */int) var_9))));
                                arr_26 [i_0] [i_1] [i_3] [i_4] [7U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (1048575LL)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    arr_35 [i_6] [0U] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18108))) : (var_3)))))));
                    arr_36 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) (+(2736398900U)))));
                }
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    arr_39 [i_6] [(unsigned short)13] [i_9] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13368637793266608793ULL))))), (4294967295U))), (33554431U)));
                    arr_40 [i_6] [i_9] [i_9] = ((/* implicit */short) ((unsigned char) ((short) var_0)));
                    arr_41 [i_6] = ((/* implicit */unsigned char) (signed char)-108);
                    arr_42 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22063))) * (var_8)));
                }
                arr_43 [i_6] [i_6] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) (unsigned char)15)), ((unsigned short)40534))), (((/* implicit */unsigned short) (unsigned char)255))));
                arr_44 [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (unsigned short)61973)))));
                arr_45 [(unsigned short)2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (min((4398046511103LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)127)) ^ (((/* implicit */int) (unsigned short)52693)))))));
                arr_46 [i_6] [(unsigned short)10] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3502613726U)) || (((/* implicit */_Bool) 5499311204895021027ULL)))));
            }
        } 
    } 
}
