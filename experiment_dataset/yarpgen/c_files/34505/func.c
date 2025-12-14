/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34505
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
    var_11 &= ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_4 [i_1 + 1] [i_1] [i_0])), (4728820113418589319LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_4))))))));
                var_13 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) 4087272773U)) ? (0LL) : (-6745765218112582928LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) arr_6 [i_3]);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                var_15 = ((/* implicit */signed char) (-(((arr_12 [i_2] [i_5 - 1]) / (((/* implicit */unsigned long long int) -4728820113418589320LL))))));
                                var_16 -= ((/* implicit */unsigned long long int) -7165944387101101972LL);
                                var_17 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_2])))), (((/* implicit */int) (unsigned short)25286))))), (max((((/* implicit */unsigned int) arr_0 [i_2])), (arr_17 [i_2] [i_5 + 1] [i_4] [i_5] [i_6])))));
                            }
                            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned int) (+(1566675448046044818LL)));
                                arr_21 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_5 - 1] [i_2])))));
                                arr_22 [i_2] [i_5] [i_5] [i_5] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned char)33))))))));
                            }
                            var_19 *= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_5 - 1]), (arr_13 [i_5 - 1]))))) : ((-(arr_2 [i_5 + 1]))));
                            arr_23 [i_5] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((-4728820113418589337LL) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3])))))))) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25286))) : (arr_6 [i_2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((-1729324870) | (((/* implicit */int) (_Bool)0))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 2; i_8 < 8; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (~(max((arr_24 [i_2] [i_3] [i_8 + 1] [i_3]), (((/* implicit */long long int) -1729324876))))));
                                arr_33 [i_2] [i_3] [i_8] [i_9] [i_10] |= ((/* implicit */_Bool) arr_6 [i_9]);
                            }
                        } 
                    } 
                    arr_34 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_30 [i_2] [i_3] [i_8] [i_8] [i_8 + 3])) > (((((/* implicit */int) (unsigned char)126)) & (((/* implicit */int) arr_30 [i_2] [i_2] [i_3] [i_8] [i_8 + 1])))))))));
                    arr_35 [i_2] [i_3] [i_8 + 2] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) (-(arr_9 [i_3] [i_8])))) * (arr_31 [i_8 - 2])))));
                }
                arr_36 [i_2] = ((/* implicit */unsigned char) 7040131279481662689LL);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_2);
}
