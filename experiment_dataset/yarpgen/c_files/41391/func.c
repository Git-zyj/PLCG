/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41391
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [7ULL] = ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 &= ((/* implicit */unsigned char) ((short) (unsigned char)0));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) (unsigned char)10)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_6 [i_0 + 2] [i_1] [i_2])))))));
                }
            } 
        } 
    }
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (var_7))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (signed char)76)) ? (arr_11 [i_3] [13LL]) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) arr_9 [i_3])))), (arr_11 [i_3] [i_3])));
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    for (int i_6 = 3; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_13 = ((short) ((((/* implicit */_Bool) (+(arr_15 [i_3] [i_4] [i_5])))) ? (min((arr_11 [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))));
                            arr_19 [i_3] [i_4] [12ULL] [i_6 + 2] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_3] [0U] [i_4] [3ULL] [i_6 + 2] [i_6]))))) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_5)), (arr_14 [i_6 - 2] [i_5 + 4] [(short)3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            var_14 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_24 [i_3] [i_4 - 1] [i_7] [i_8] [i_3] [(short)13]), (arr_24 [i_3] [i_4 - 1] [i_7] [i_8] [i_7] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 140737488355320ULL)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (signed char)-77)))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_3] [i_3] [i_4] [i_4] [i_4] [i_8])) : (((/* implicit */int) (_Bool)1)))))))) : ((((_Bool)1) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_8] [(_Bool)1] [i_3])) || (((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_7]))))))))));
                            var_15 |= (-((~(1152358554653425664ULL))));
                            arr_26 [i_3] [i_4] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */long long int) 2147483647)) : (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_3] [i_3]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)235)), (var_8))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 24; i_11 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_30 [i_3] [i_4]))))))))));
                                arr_35 [i_3] [i_4] [i_10] [i_10] [i_11 - 1] = ((/* implicit */short) var_6);
                                arr_36 [i_10] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((min(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) arr_30 [i_11] [i_11 - 1])))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1)))))) : (((arr_15 [i_4 - 1] [i_9 + 2] [i_11 - 1]) / ((+(((/* implicit */int) arr_18 [i_3] [i_3] [(signed char)14] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), ((+(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
}
