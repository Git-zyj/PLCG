/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218646
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_11))))) >= (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((unsigned long long int) 1480226488120193452LL))))));
    var_15 = ((/* implicit */short) ((((((/* implicit */int) min((var_5), (var_5)))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)197)))))) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)19)))))))) : (16456118914025777117ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) var_13)))))));
                    arr_9 [i_2 + 4] [i_2 - 1] [i_2 + 2] [i_2 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)100))))) || (((/* implicit */_Bool) arr_8 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))))) : (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [4U] [i_2] [i_2 - 3]))) : (arr_5 [i_0] [i_1] [i_2 - 2]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((~(959060638914210775LL)))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) -4924546236353003571LL);
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-14393)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) max(((short)14394), (((/* implicit */short) var_4))))))))))));
                arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_15 [i_3] [i_3] [i_4 - 1])))) >= (((((((/* implicit */int) arr_14 [i_4 + 1] [i_3])) <= (((/* implicit */int) arr_13 [i_3])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_3]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                arr_23 [i_7] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) (short)14410)) : (((/* implicit */int) (_Bool)1))))));
                                arr_24 [i_3] [(short)16] [i_5] [i_7] [i_6 + 3] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_6 + 3]))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)19)) - (((/* implicit */int) ((unsigned short) 1497996692610821503ULL)))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] [i_4] = ((/* implicit */short) 1972486073U);
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    arr_29 [i_3] [i_4 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [7U] [i_4] [i_8])) ? (arr_10 [i_3] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_30 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1])) ? (((arr_28 [i_8] [i_4 + 1] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_4] [i_4])))))));
                    var_21 = ((/* implicit */int) ((arr_17 [i_3] [i_4 - 1] [i_4 - 1]) <= (arr_28 [i_3] [i_4] [i_4 - 1])));
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            arr_36 [i_3] [i_3] [i_3] [i_3] [i_10] &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_9])) > (((int) var_13))))) < (((/* implicit */int) var_10))));
                            arr_37 [i_3] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_32 [i_4] [i_9] [i_4])) != ((~(14816994385149420759ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
