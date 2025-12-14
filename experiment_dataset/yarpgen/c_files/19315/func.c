/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19315
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
    var_19 = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned long long int) var_10))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_4)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17)))) & (0ULL)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = 10ULL;
                    arr_11 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((arr_8 [i_2] [i_1] [i_2]) + (2147483647))) >> (((var_4) - (13001977813687587984ULL)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32139))))) ? (((((/* implicit */unsigned long long int) 3211910991189145190LL)) | (arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) var_10)), (var_12)))))))) : (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((arr_8 [i_2] [i_1] [i_2]) - (2147483647))) + (2147483647))) >> (((var_4) - (13001977813687587984ULL)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32139))))) ? (((((/* implicit */unsigned long long int) 3211910991189145190LL)) | (arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) var_10)), (var_12))))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 0ULL))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [i_0])))) ? (18446744073709551615ULL) : (min((2250700302057472ULL), (((/* implicit */unsigned long long int) (signed char)-1))))));
        arr_12 [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) 928631613750478214LL)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) var_14))));
    }
    var_23 -= ((/* implicit */int) 12642599448422230898ULL);
    var_24 = ((/* implicit */int) min((var_24), (-1848031793)));
}
