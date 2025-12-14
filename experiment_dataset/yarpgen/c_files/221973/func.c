/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221973
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (15137777660975584991ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [12ULL] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [13ULL]))) + (arr_4 [i_0] [i_1] [i_2]))) : (min((((/* implicit */long long int) (unsigned char)215)), (7344513284087442410LL)))))));
                    var_18 |= ((/* implicit */unsigned long long int) arr_3 [i_1]);
                    arr_7 [i_0] [i_1] [i_1] [10ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40400)) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (arr_6 [i_2] [5LL] [(signed char)20] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            {
                arr_14 [i_4] [i_4] [i_3] = ((/* implicit */int) arr_9 [i_4]);
                var_19 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) min((arr_10 [i_4 + 2]), (((/* implicit */long long int) ((18685183) == (((/* implicit */int) arr_1 [i_4] [i_4])))))))) : (min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_5 [i_3] [i_4] [i_4])) : (18685204)))), (arr_12 [i_3] [i_4])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            {
                                arr_27 [7LL] [i_6] [i_7] [(unsigned short)10] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((arr_16 [i_5 - 1] [i_9 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned int) 18685204))));
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2146750695350072824LL)) ? (8396611094796134464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1] [i_9 - 2])))));
                                var_21 += var_16;
                                arr_28 [i_9] [i_9] [i_6] [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18685204)) ? (-18685205) : (((/* implicit */int) (unsigned short)0))))), ((~(var_13)))))), (((((/* implicit */unsigned long long int) min((18685184), (((/* implicit */int) arr_5 [i_7] [i_6] [(short)2]))))) ^ (((((/* implicit */_Bool) -18685184)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97)))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [12] [(signed char)12])) || (((/* implicit */_Bool) ((arr_24 [i_6] [i_7] [i_5 + 1] [i_6]) | (arr_24 [i_6] [i_6] [i_5 - 1] [i_6]))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_24 [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (arr_24 [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) 0LL))))));
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (unsigned char)178);
                                var_25 *= ((/* implicit */signed char) min((max(((-(arr_22 [i_11] [i_12]))), (((/* implicit */unsigned int) -18685173)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14447442756408363575ULL)) ? (((18685204) - (arr_35 [i_5] [i_6] [i_10] [i_11] [i_12]))) : (((/* implicit */int) var_11)))))));
                                var_26 = ((/* implicit */short) 18685183);
                                var_27 -= ((/* implicit */unsigned long long int) min((-18685184), (min((((/* implicit */int) arr_36 [i_6] [i_11] [i_12])), (18685204)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
