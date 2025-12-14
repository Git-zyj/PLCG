/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201574
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((2542221161U) > (min((((/* implicit */unsigned int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13455))) : (458752U)))))));
                    arr_9 [i_0 - 1] [i_1 + 1] [i_0 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (short)-3686)) <= (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) (short)-13456)) : (((/* implicit */int) arr_6 [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3]))) : (var_13)))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)4)) / ((+(var_17))))), (((/* implicit */int) var_18))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_19 [(signed char)0] [i_4] [i_5] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)13454)) ? (-540276236) : (((/* implicit */int) (_Bool)1))))) ^ (min((((/* implicit */long long int) var_12)), (var_9)))))) ? ((~(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)28))))))) : (min(((~(((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_12)))))));
                    arr_20 [i_3] [4U] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) min(((short)-13455), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-3686)))))))), (min((min((arr_18 [i_3] [i_5] [(short)8] [i_3]), (arr_0 [i_5] [i_3]))), (((/* implicit */unsigned short) arr_6 [i_3] [i_4 + 1]))))));
                    arr_21 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775782LL)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (short)-5684))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */short) (-((-(((/* implicit */int) arr_11 [(unsigned short)10]))))));
        arr_25 [i_6] = ((/* implicit */int) (+((+(-3291317039548530933LL)))));
        arr_26 [i_6] = ((/* implicit */signed char) ((((-586957588) + (2147483647))) << (((((/* implicit */int) (short)3686)) - (3686)))));
    }
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
}
