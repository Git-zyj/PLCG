/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206002
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
    var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))));
    var_12 = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned char) var_9))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_0] [(signed char)5] [i_3]);
                            var_13 = max((((arr_3 [i_0 - 3] [i_0]) ? (arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_0]))) | (arr_9 [i_0] [17ULL] [i_2] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536608768)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_2] [(_Bool)1] [i_2] [i_0])))))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [(short)18] [0U] [i_0] [i_0] [(short)18])), (arr_8 [i_0] [i_0 - 1] [i_0] [(short)6]))))) * (((((/* implicit */long long int) var_7)) / (3828461481504714888LL))))))))));
            arr_15 [i_0] = ((/* implicit */int) (unsigned char)0);
            var_15 = arr_1 [i_0];
        }
        for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_16 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_5]))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((var_9) ? (arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_6 + 1]) : (arr_11 [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 1] [i_6 - 2]))));
                        var_17 = ((/* implicit */_Bool) -3828461481504714888LL);
                        var_18 = ((/* implicit */long long int) ((int) max((max((((/* implicit */unsigned long long int) arr_3 [i_0] [6ULL])), (11200536340054390426ULL))), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [(unsigned char)12] [18LL])))));
                    }
                } 
            } 
            arr_24 [(_Bool)1] [0U] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (~(arr_11 [i_0 + 2] [14LL] [14LL] [i_5] [i_5]))))) ? (((var_3) ? (((arr_18 [i_0 + 3] [i_0 + 3] [i_5]) ? (11200536340054390426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)0), (arr_5 [i_0] [i_5] [18ULL])))) > (((/* implicit */int) arr_1 [(_Bool)1]))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_28 [i_5] [12U] [i_8 - 1] [i_8 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 3] [i_9])) ? (((/* implicit */int) arr_8 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8])) : (((/* implicit */int) var_1))))) : (((unsigned long long int) arr_28 [i_5] [(unsigned char)17] [13ULL] [i_8 + 1])))))));
                        arr_31 [i_0 + 1] [i_0] [i_8 + 1] [i_8 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_25 [i_9]))) ? (arr_9 [i_0] [(unsigned char)9] [(unsigned char)9] [i_8 + 1] [i_0]) : (arr_13 [i_0 + 2] [(unsigned char)10] [i_8] [(unsigned char)10] [i_8] [i_0 - 1])));
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((_Bool) min((arr_0 [i_0] [i_5]), (arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_5]))))) : (((((/* implicit */_Bool) ((var_3) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [(unsigned short)16] [(_Bool)1] [i_0])))))) ? (((/* implicit */int) min((var_6), (((/* implicit */short) arr_19 [i_0] [i_5]))))) : (((/* implicit */int) ((unsigned char) var_6)))))));
        }
        arr_32 [i_0] = (+(((/* implicit */int) var_5)));
        arr_33 [i_0] = ((/* implicit */unsigned char) ((((arr_9 [i_0 + 3] [i_0 + 3] [(unsigned short)19] [(unsigned short)1] [i_0]) > (arr_9 [i_0 + 3] [i_0] [i_0] [15ULL] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0]) | (arr_9 [i_0 + 3] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 1) 
    {
        var_21 = ((/* implicit */signed char) arr_7 [i_10 - 1]);
        arr_36 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_10] [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10 + 1] [i_10 + 1] [i_10]))) : (-8765686440958414794LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_10] [i_10])) > (((/* implicit */int) arr_3 [i_10] [i_10])))))) : (((long long int) arr_5 [i_10 - 1] [i_10 - 1] [i_10]))));
        arr_37 [i_10] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((var_1) ? (3828461481504714888LL) : (var_4)))) ? (((((/* implicit */unsigned long long int) 1932779652U)) | (0ULL))) : (((/* implicit */unsigned long long int) ((arr_21 [i_10] [i_10]) | (3577203384U)))))));
    }
    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        arr_41 [(_Bool)1] = ((/* implicit */unsigned short) arr_13 [(signed char)6] [i_11] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_11]);
        arr_42 [i_11] = ((/* implicit */long long int) (signed char)45);
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_3)) > (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_6))))))))) : (((min((var_7), (var_7))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (short)30875))))))))))));
    var_23 ^= var_0;
}
