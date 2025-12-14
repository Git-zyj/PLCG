/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3845
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_3] [(signed char)2]) | (arr_3 [i_1] [i_2] [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_2]))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [(_Bool)1] [i_1] [i_1] [1LL]), (((/* implicit */signed char) arr_1 [i_3])))))) & (min((arr_8 [i_3] [i_1] [i_2]), (arr_8 [i_2] [i_2] [i_3]))))))));
                            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) (unsigned char)106);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0]), (arr_5 [10U])))) ? (((/* implicit */long long int) max((arr_4 [i_2] [i_0]), (arr_9 [i_0] [i_1] [i_2] [i_3])))) : (min((((/* implicit */long long int) (unsigned char)150)), (-6226673431795158139LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [12] [(signed char)3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_3] [i_2] [i_1] [i_0])))) || (((/* implicit */_Bool) max((1903156075), (((/* implicit */int) (unsigned char)106)))))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((arr_17 [7ULL] [i_1] [5LL] [i_5]), (arr_13 [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) arr_14 [(signed char)9] [i_4] [i_1])), (arr_3 [(signed char)0] [i_0] [(unsigned char)6]))))) > (max((((/* implicit */unsigned long long int) min((arr_9 [5U] [i_1] [i_4] [i_5]), (((/* implicit */unsigned int) arr_6 [(unsigned char)4] [i_1] [i_4] [i_5]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_4] [i_5]))))))));
                            var_22 &= ((/* implicit */_Bool) -7573431828521485299LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = min((((/* implicit */int) var_19)), (((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-70)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (max((min((((/* implicit */long long int) min((arr_19 [i_6]), (arr_22 [i_6] [i_7] [i_8])))), (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_6] [i_6]))) & (5313003662430273379LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_6] [i_7] [i_8] [i_6])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) max((arr_25 [i_8] [i_8] [8LL] [i_6]), (((/* implicit */signed char) arr_22 [i_6] [(_Bool)0] [14]))))))))))));
                    arr_26 [(unsigned short)9] [i_7] [i_8] [i_8] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_23 [i_8] [i_7] [13ULL])) : (((/* implicit */int) arr_23 [i_7] [i_6] [i_8]))))), (((((((/* implicit */int) arr_23 [i_8] [i_7] [i_6])) <= (((/* implicit */int) (_Bool)1)))) ? (6226673431795158139LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7])))))));
                    var_25 += ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) arr_20 [i_6]))) ? (((/* implicit */unsigned long long int) ((arr_22 [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6]))) : (631372939U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6]))) * (1999192975921555310ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) arr_24 [(unsigned char)11])))), (((((/* implicit */_Bool) arr_25 [(unsigned char)11] [i_7] [(unsigned char)5] [8LL])) ? (((/* implicit */int) arr_23 [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_24 [i_8])))))))));
                }
            } 
        } 
    } 
}
