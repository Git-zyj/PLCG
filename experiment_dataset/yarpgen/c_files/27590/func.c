/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27590
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
    var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((var_8), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) arr_0 [(short)22]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) var_1))))));
        var_13 &= arr_1 [i_0];
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (+(min((var_7), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))));
                        var_15 = ((/* implicit */int) (short)-32763);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            arr_13 [i_3] [i_4] [0LL] [12] [i_4] &= ((short) (short)32762);
                            var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                            arr_14 [i_0] [i_3] [(_Bool)1] [(short)23] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [10U] [i_0] [i_4] [i_3] [i_2]);
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_5) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned int) ((unsigned short) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) min(((short)26827), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned short)14] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 1884355217)) : (407998514U)))))));
                            var_18 = ((/* implicit */unsigned short) var_6);
                            arr_18 [i_5] [i_5] [i_0] [i_5] [(_Bool)1] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned char)17))))), (min((((/* implicit */unsigned int) 34110702)), (15U))))));
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0]);
                            var_20 = ((/* implicit */int) (+((+(arr_20 [i_6] [i_6] [i_3 + 1] [i_2 - 2] [22ULL] [i_6] [i_0])))));
                            arr_21 [i_0] [i_0] [i_2] [15ULL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), ((+(15U)))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)28086)))), (((/* implicit */int) (unsigned char)20))))) : ((-(min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_9 [(unsigned char)3] [(_Bool)1] [i_2] [(unsigned short)11] [20ULL])))))));
                            var_21 &= ((/* implicit */short) ((int) (short)19835));
                            var_22 += ((/* implicit */signed char) var_2);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (unsigned short)12))));
        var_24 = ((/* implicit */unsigned int) min((min((0ULL), (((/* implicit */unsigned long long int) -692263216)))), (max((((/* implicit */unsigned long long int) arr_22 [i_7])), (3ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_29 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (short)-32762))))) ? ((-(arr_17 [7LL] [(short)19] [i_8] [(_Bool)1] [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                arr_34 [i_7] [i_8] [(short)2] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                var_25 = ((/* implicit */unsigned int) arr_3 [i_8] [(short)17] [i_9]);
                arr_35 [i_7] [11LL] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28675))) : (var_7)));
            }
            for (long long int i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
            {
                var_26 += ((/* implicit */short) var_4);
                var_27 = ((/* implicit */unsigned int) min(((unsigned char)208), (((/* implicit */unsigned char) ((_Bool) var_0)))));
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) (-(arr_6 [i_7] [(short)9] [3U] [i_11])));
                arr_40 [0] [(short)8] [i_11] [i_11] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)32767))))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_31 [(signed char)10] [i_11] [(_Bool)1]))));
            }
            for (int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                arr_44 [i_8] [i_8] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) (unsigned short)17097)) : (((/* implicit */int) (_Bool)1))));
                var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [6U] [(_Bool)1] [(short)8] [(short)0])) ? (((((/* implicit */_Bool) arr_11 [0] [24] [10ULL] [24] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 6109035196742592081ULL)) ? (((/* implicit */int) (_Bool)1)) : (2147483647))))) : (((((/* implicit */int) (unsigned short)10347)) - (((/* implicit */int) (short)32756))))));
            }
            arr_45 [i_8] = ((/* implicit */int) arr_22 [8LL]);
        }
    }
    for (long long int i_13 = 1; i_13 < 16; i_13 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (14312838234514519390ULL)));
        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_6 [i_13] [(short)8] [i_13] [i_13])))));
        var_33 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_1 [i_13 + 2])) << (((min((((/* implicit */unsigned int) var_3)), (arr_7 [i_13] [i_13] [i_13] [i_13]))) - (246054248U))))));
        var_34 &= arr_6 [i_13] [i_13] [i_13] [(short)2];
    }
}
