/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43866
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
    var_10 ^= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6027952522046564052LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0]);
            var_11 ^= ((/* implicit */_Bool) var_9);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) -6519166925258005986LL)) ? (6027952522046564051LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))))))));
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                arr_16 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned char)41))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60112))) : (6027952522046564060LL)));
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
            {
                var_14 ^= ((/* implicit */short) (+(1133329342)));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0])) ? (arr_15 [i_0]) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                arr_19 [i_0] = ((/* implicit */unsigned short) (-(((unsigned long long int) (short)14))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
            {
                var_16 ^= ((/* implicit */int) (+((-(9223372036854775807LL)))));
                arr_22 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) var_2)) ? (-736702136) : (((/* implicit */int) (unsigned char)244)))));
                var_17 = ((/* implicit */unsigned short) var_5);
            }
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                var_18 = ((/* implicit */short) -999884843);
                arr_26 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_0]))));
            }
            for (short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (24U) : (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_7]))));
                arr_30 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -6027952522046564060LL)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (unsigned short)65528)))));
                var_20 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)5446)))) >> (((((/* implicit */int) (unsigned short)60112)) - (60111)))));
                var_21 = ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_2] [i_7] [i_0])) ? (arr_23 [i_0] [i_2] [i_7] [i_0]) : (((/* implicit */int) (unsigned char)203)))) : (var_7));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (arr_0 [8U]) : (arr_0 [(unsigned short)6])));
            arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)60103)) & (((/* implicit */int) (short)16320))));
        }
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        var_23 = (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_9)))))));
        var_24 ^= ((/* implicit */unsigned int) (signed char)-2);
        var_25 = ((/* implicit */unsigned short) arr_35 [i_9]);
    }
    var_26 ^= ((/* implicit */unsigned int) var_5);
}
