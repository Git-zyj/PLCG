/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248907
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
    var_18 |= (-(((/* implicit */int) var_13)));
    var_19 = ((/* implicit */long long int) var_9);
    var_20 = ((var_1) >> (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((+(-984284802884701524LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [0LL] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_1 [i_0]), ((short)4494))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-4495)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 2] [i_0] [i_0])))))));
                    var_22 = ((/* implicit */short) (~(((long long int) arr_5 [i_2 + 1] [4ULL] [i_2 - 1]))));
                    var_23 |= ((/* implicit */unsigned short) ((var_10) ? (((int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)4517))))))))));
                }
                for (long long int i_3 = 2; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_0] = ((/* implicit */long long int) (signed char)-1);
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [7ULL] [i_3 - 2])) << (((((/* implicit */int) arr_8 [i_0] [7ULL] [i_0])) + (5374)))))) ? (((/* implicit */long long int) (~(967271752)))) : (((arr_5 [i_0] [i_1] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_5 [(_Bool)1] [1U] [i_3]))))) ? (((/* implicit */unsigned long long int) var_5)) : (((unsigned long long int) -967271748)))) : (((/* implicit */unsigned long long int) ((((-1376801026843136656LL) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_9 [1ULL] [10ULL] [10ULL] [i_0])) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))))));
                }
                for (long long int i_4 = 2; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) ((((arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2]) ? (arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 1]) : (arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 1]))) + (((((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2])) ^ (((/* implicit */int) (short)148))))));
                    var_26 = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) arr_3 [i_4] [i_4 + 1] [i_4])))));
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_4 - 1] [i_4]))));
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    var_28 |= ((/* implicit */long long int) (((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) <= (((/* implicit */int) (unsigned char)105))));
                    arr_18 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [5U] [i_1] [i_0])) < (((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) (short)-15))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_17)), ((~(((((/* implicit */_Bool) (short)-4474)) ? (((/* implicit */int) var_3)) : (967271766)))))));
}
