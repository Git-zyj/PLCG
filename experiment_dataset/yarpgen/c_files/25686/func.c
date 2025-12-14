/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25686
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((var_8) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24185)))))))), (((_Bool) ((short) (short)10419))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2]))) >= (var_6))) ? (max((arr_3 [i_1 + 3]), (((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (short)24181)) - (24166))))))) : (((((/* implicit */int) (short)-10423)) | (((/* implicit */int) ((unsigned char) arr_2 [i_1]))))))))));
                var_17 = var_4;
            }
        } 
    } 
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) var_7))))) ? ((+(var_4))) : ((+(var_12)))))) || (var_2)));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_19 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_9 [i_2] [i_3])), (max((9223372036854775802LL), (min((var_14), (((/* implicit */long long int) var_1))))))));
            var_20 -= ((((/* implicit */int) ((var_8) <= (((((/* implicit */_Bool) arr_7 [(short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)))))) | (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (unsigned short)48630)))));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_11 [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_4])))) : (((12888778605724879419ULL) | (arr_6 [i_2])))));
            var_22 -= (short)24190;
        }
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_14))));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) var_14);
        arr_16 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_5]), (arr_13 [i_5]))))) : (min((var_4), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10415))) : (min((min((((/* implicit */unsigned long long int) var_7)), (var_8))), (((/* implicit */unsigned long long int) arr_14 [i_5]))))));
        arr_17 [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)8631))))));
    }
}
