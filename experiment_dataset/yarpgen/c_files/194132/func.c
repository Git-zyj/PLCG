/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194132
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
    var_17 = ((/* implicit */unsigned short) 9312142167452348077ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((((9134601906257203549ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (var_3)));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((224) * (((/* implicit */int) arr_0 [i_2 - 1])))) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_2 + 1])))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) 1185226410U));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (9134601906257203538ULL) : (9312142167452348087ULL))))))));
                }
                for (int i_3 = 1; i_3 < 24; i_3 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) ((unsigned char) 2585579154U))) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_3 + 1]))))));
                    arr_12 [i_3] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9134601906257203554ULL)) ? (9134601906257203523ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (unsigned short)3)) ? (-1201030766139069500LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))));
                }
                for (int i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
                {
                    var_21 += ((/* implicit */unsigned short) ((2458466351U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))));
                    arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)41944)) & (((/* implicit */int) (_Bool)1))));
                    arr_16 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_14 [i_1] [i_1] [i_1]))) >> (((((((unsigned long long int) (short)-26937)) * (((/* implicit */unsigned long long int) ((1182852726) ^ (((/* implicit */int) arr_6 [i_4 + 1] [i_4] [i_1] [i_0]))))))) - (18446712211365838716ULL)))));
                    arr_17 [i_0] [i_1] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned long long int) -5451288263780317976LL);
                }
                for (int i_5 = 1; i_5 < 24; i_5 += 3) /* same iter space */
                {
                    arr_20 [i_0] [i_1] = ((/* implicit */_Bool) 9134601906257203538ULL);
                    var_22 = arr_7 [i_0] [i_1] [i_0];
                }
            }
        } 
    } 
}
