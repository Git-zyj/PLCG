/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211527
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) max(((unsigned short)7), ((unsigned short)65529)))))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)21))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) var_16)))))) : (min((((/* implicit */long long int) var_9)), (var_6)))))) ? ((-(min((1066148296257360136LL), (((/* implicit */long long int) 3905007322U)))))) : (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-103)), ((unsigned short)7)))), ((+(((/* implicit */int) (_Bool)1))))))))))));
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-181615356) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (-2267665400164632894LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((long long int) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)114)))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -1938626137)) && (((/* implicit */_Bool) -1830363437)))))))) ? (1938626136) : (((/* implicit */int) (signed char)127))));
    var_23 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_24 = (signed char)89;
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) var_2);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((_Bool) var_9))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -996442137414782322LL)))))));
                        arr_16 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((arr_14 [i_5 - 1] [i_5 - 1]) + (arr_14 [i_5 - 1] [i_5 - 1])));
                    }
                } 
            } 
            var_27 = ((((/* implicit */_Bool) (signed char)127)) ? (989216361) : (((/* implicit */int) (unsigned char)78)));
        }
        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
            {
                arr_25 [i_2] [(signed char)2] [i_6 + 1] [(signed char)2] = ((/* implicit */unsigned int) ((signed char) arr_24 [i_7 - 1] [i_6 - 3] [i_2]));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_6 - 2])))))));
            }
            var_29 -= ((/* implicit */short) max((max(((+(var_1))), (((/* implicit */long long int) var_18)))), ((-((-(var_2)))))));
        }
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (-((-(((/* implicit */int) var_14)))))))));
            arr_28 [i_2] [i_8] = ((/* implicit */long long int) (signed char)-23);
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            arr_37 [i_2] [i_2] [i_2] [i_2] [2LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 1505006763)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (_Bool)1))));
                            arr_38 [i_2] [i_8 + 1] [i_2] [i_10] [i_8 - 3] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 6229362623388994641LL)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_9 [i_2]))), (((/* implicit */unsigned long long int) min((-2267665400164632891LL), (((/* implicit */long long int) (unsigned short)449)))))))) ? (((((/* implicit */_Bool) min((var_9), ((unsigned char)236)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_29 [i_2] [(short)13] [i_9] [8]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */short) arr_7 [i_9])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_8] [i_9] [i_10] [8LL])))));
                            var_31 = ((/* implicit */long long int) var_15);
                        }
                    } 
                } 
            } 
        }
    }
}
