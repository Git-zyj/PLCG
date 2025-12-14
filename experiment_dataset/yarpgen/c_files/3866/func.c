/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3866
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
    var_13 |= ((/* implicit */short) min((var_6), (((((/* implicit */_Bool) max((-68403661), (-68403661)))) ? (((((/* implicit */unsigned long long int) -1168742648)) * (var_0))) : (var_7)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) var_5);
                    var_15 |= ((/* implicit */short) var_8);
                }
            } 
        } 
        arr_9 [(_Bool)1] |= ((/* implicit */short) max((arr_6 [(unsigned char)0] [(unsigned char)0] [(unsigned short)4] [(unsigned short)10]), (((max((arr_6 [4] [i_0] [(unsigned short)4] [4]), (((/* implicit */unsigned long long int) arr_7 [(short)8] [i_0 - 1] [8])))) ^ (((/* implicit */unsigned long long int) (~(-68403661))))))));
        var_16 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-68403661), (arr_7 [(unsigned short)10] [(short)6] [12ULL])))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (short)-1024))))), (((((((/* implicit */_Bool) 6895875221977995540ULL)) ? (5576868405486259012ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20467))))) / (((/* implicit */unsigned long long int) arr_7 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0]))))));
        var_17 &= ((/* implicit */unsigned short) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((arr_6 [(short)4] [i_0] [i_0] [(unsigned char)12]) - (16231038771621419773ULL)))))), (min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_0))))) : (((unsigned long long int) arr_7 [(short)6] [i_0 - 1] [i_0]))));
        arr_10 [i_0] = ((/* implicit */_Bool) (unsigned char)31);
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
    {
        arr_13 [16] [(signed char)2] = ((/* implicit */_Bool) var_0);
        var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) 68403649))), (arr_12 [i_3 + 1] [i_3 - 1])));
    }
    for (int i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) var_3)), (arr_11 [(short)11])))), (max((((/* implicit */long long int) (_Bool)1)), (arr_14 [(unsigned char)12])))))) ? (max((((unsigned long long int) -68403674)), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (0)))))) : (arr_17 [(unsigned short)0])));
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)255)));
        var_21 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) 68403657)), (((((/* implicit */_Bool) min((arr_12 [(unsigned short)2] [i_4]), (((/* implicit */long long int) -622166466))))) ? (((long long int) arr_15 [i_4] [2ULL])) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_15 [i_4] [(unsigned char)2])), (arr_11 [i_4])))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)42)) & (((/* implicit */int) (_Bool)1))))));
    }
    for (int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_22 |= ((/* implicit */_Bool) ((arr_17 [(short)20]) >> ((((-(((/* implicit */int) var_11)))) + (13572)))));
        var_23 = ((/* implicit */_Bool) var_4);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 2) 
                {
                    {
                        arr_30 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_5 - 1]))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_6] [i_8 + 1] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5 - 1] [i_6] [10ULL] [10ULL])))))) & (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1)))))))))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (var_4) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
}
