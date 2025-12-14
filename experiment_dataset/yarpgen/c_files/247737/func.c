/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247737
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [17LL] [(unsigned short)0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1589438402U))));
                            var_11 = ((/* implicit */signed char) 2480700046651872721LL);
                            var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((unsigned char) 2705528894U))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((long long int) var_5)) : (((long long int) arr_4 [(_Bool)1] [i_3 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */short) 6709946339189849417LL);
                            var_13 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) -2305843009213693952LL)))) ? (((((/* implicit */_Bool) ((short) 4294967290U))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (min((var_2), (((/* implicit */long long int) (unsigned char)130)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_9)))))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1589438402U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) ((((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_2 [i_0])))) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)49964))))))))));
                            var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_5 [5LL] [i_0 + 1])), (min((var_9), (((/* implicit */signed char) var_6))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [(unsigned char)18] [i_0] [16LL] [i_1] [i_0]))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (1589438402U)))))));
                            /* LoopSeq 3 */
                            for (short i_6 = 2; i_6 < 18; i_6 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned char) (_Bool)1);
                                var_17 = ((/* implicit */unsigned char) max((-4321531844519893953LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) 6709946339189849417LL)) ? (var_2) : (((/* implicit */long long int) 1589438402U)))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))))))));
                                arr_20 [i_1] [i_5] [i_0] [i_1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) ((var_6) || (((/* implicit */_Bool) min(((signed char)95), (var_9))))))) * ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)15))))))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                            {
                                arr_24 [7LL] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [i_0 - 2] [i_0 - 2]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) - (((((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)5]))) / (2551434836072910269LL)))));
                            }
                            for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                            {
                                arr_27 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) var_7);
                                arr_28 [(_Bool)1] [(_Bool)1] [(unsigned char)0] [6LL] [(unsigned short)12] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (!(var_8)))) * (((/* implicit */int) var_9))));
                                var_19 = ((/* implicit */unsigned char) min((max((((long long int) -2480700046651872722LL)), (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_7))))), (((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_25 [i_0] [(unsigned char)3] [i_8 + 1] [i_5] [i_5])) - (38832))))))));
                                var_20 = ((/* implicit */unsigned short) var_7);
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1] [(_Bool)1])))))));
            }
        } 
    } 
    var_22 = var_5;
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) ^ (-2551434836072910289LL)));
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_9] [i_10] [i_9])) & (((/* implicit */int) var_6))));
                    arr_37 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((var_3), ((short)-32744)))) <= (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_31 [i_9])))))))) << (((((/* implicit */int) ((short) max((((/* implicit */unsigned short) arr_29 [i_9] [i_10])), (var_10))))) + (5327)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 2; i_12 < 24; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 24; i_13 += 2) 
                        {
                            arr_44 [i_10] [i_10] [i_11] [i_10] [(short)1] [(short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6709946339189849405LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_30 [i_9])))))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_38 [i_9] [(signed char)22] [(signed char)9] [4U] [i_12] [i_13 + 1])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_30 [i_9])))) ? (((/* implicit */int) arr_43 [i_13] [i_13 + 1] [(signed char)6] [(signed char)6] [i_13 + 1] [i_13])) : (((/* implicit */int) (signed char)-21))))));
                            arr_45 [i_10] [i_10] [i_10] [i_10] [(unsigned short)20] = ((/* implicit */long long int) var_4);
                        }
                        var_25 = ((/* implicit */_Bool) var_7);
                    }
                    var_26 = ((/* implicit */unsigned short) ((((unsigned int) var_3)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_40 [i_9] [i_9] [i_10] [i_11] [i_11] [14U]))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))));
}
