/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246348
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max(((short)15438), (((/* implicit */short) (!(((/* implicit */_Bool) 11796302475205294132ULL))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_19 = ((7729559064092758988ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))))));
            var_20 = ((/* implicit */unsigned long long int) ((short) 10330962782497686882ULL));
        }
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8115781291211864734ULL)))))) * (((unsigned int) arr_0 [i_0 + 3] [i_0]))));
                        var_22 = ((/* implicit */unsigned char) 6709751993903549246LL);
                        var_23 = max((((arr_5 [i_3 + 2] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)8184)), ((unsigned short)43505))))) : (196725756053745671LL))), (((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= (6034716806070760595LL))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) ((max((arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_0 - 3] [i_0 - 2]), (arr_10 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3] [i_0 - 2] [i_0 - 2]))) ? (((arr_10 [i_2] [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (8681876588716988268ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_0] [i_0] [i_0 + 1]))))) : (((unsigned long long int) 6709751993903549245LL))));
            arr_11 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1] [i_2])) / (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_2 + 3] [i_2 - 1] [i_2]))))), (((((/* implicit */_Bool) -6709751993903549247LL)) ? (arr_9 [i_2 + 2] [i_0 + 1] [i_0 + 3]) : (arr_9 [i_2 + 2] [i_0 + 1] [i_0 + 3])))));
            /* LoopNest 3 */
            for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_21 [11ULL] [i_5 + 1] [11ULL] [i_5] [11ULL] [i_5] = ((/* implicit */unsigned int) 9202693321717545879LL);
                            arr_22 [i_6] [i_6] [i_5] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) max((((int) arr_18 [i_0 + 1] [i_0] [i_2 + 2] [i_5] [i_5 + 1] [i_5 + 1] [i_0])), (((/* implicit */int) max((arr_12 [i_0] [i_0] [i_0] [i_0 + 3]), (arr_12 [i_0] [i_0] [i_0 - 3] [i_0 - 1]))))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */signed char) ((0) <= (((/* implicit */int) arr_12 [i_0] [i_2] [i_5] [i_7]))))), (arr_0 [i_5] [i_5]))));
                            arr_23 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_2] [i_5 + 1]);
                        }
                    } 
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned int) 7004405412223176988LL);
        arr_24 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 3]))) - (arr_9 [i_0] [i_0 - 1] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_1 [i_8]))));
        var_28 = ((/* implicit */long long int) arr_10 [i_8] [i_8 + 2] [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8]);
    }
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_28 [i_9])));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)32767)))) / (((6709751993903549228LL) + (arr_30 [i_9])))))) >= (((unsigned long long int) arr_30 [i_9]))));
    }
}
