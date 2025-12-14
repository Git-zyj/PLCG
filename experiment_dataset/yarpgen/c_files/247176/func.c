/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247176
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_5)))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned char) (+(((unsigned int) ((unsigned short) var_4)))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((signed char) 1152917106560335872LL))))) + (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                arr_9 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (~(10691152084680771831ULL)));
                var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_4 [i_2 - 1] [i_1 - 1] [i_1 + 1])), ((-(((/* implicit */int) (unsigned char)159)))))), (((int) max((-1152917106560335873LL), (((/* implicit */long long int) 711990526)))))));
                arr_10 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_2 - 1])) + (((/* implicit */int) arr_2 [i_1 + 1] [i_2 - 1] [i_2 - 2])))), (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_6)))))));
            }
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_14 = ((((/* implicit */_Bool) min(((+(arr_11 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) 1214631099U)), (((unsigned long long int) 656720789)))));
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((7755591989028779785ULL) != (((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */long long int) arr_0 [i_3])))), (((/* implicit */long long int) (!((_Bool)1)))))))));
                var_15 ^= ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_3]);
            }
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) * (6215680541720390613ULL)));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1152917106560335873LL)) ? (((/* implicit */int) arr_2 [i_4 + 1] [i_4] [i_4])) : (((/* implicit */int) arr_2 [i_4 + 1] [i_0] [i_0]))));
            arr_16 [i_0] [i_4] [(signed char)0] = ((/* implicit */int) ((((-1152917106560335873LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)10] [i_0] [i_0]))) < (arr_3 [4U] [i_4]))))) >= (((((/* implicit */_Bool) arr_4 [i_4] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1405953220859907304LL)) : (var_7)))));
        }
        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) min((10691152084680771831ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((unsigned long long int) (+(((/* implicit */int) arr_14 [i_0])))))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((((int) (_Bool)1)), (((/* implicit */int) (unsigned short)11413))));
        var_21 |= ((/* implicit */unsigned char) (+(arr_11 [i_5] [i_5] [i_5])));
        var_22 = ((/* implicit */int) max((min((max((((/* implicit */long long int) (signed char)-121)), (var_9))), ((~(var_9))))), (max((arr_3 [i_5] [i_5]), (((/* implicit */long long int) var_0))))));
    }
    for (signed char i_6 = 4; i_6 < 23; i_6 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_22 [i_6] [i_6]), (((/* implicit */short) (unsigned char)241))))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_6 - 4] [i_6 + 1])) : (((/* implicit */int) var_3)))))))) != (max((((/* implicit */unsigned long long int) var_5)), (6117408692563834739ULL)))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((max((-1152917106560335873LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((arr_21 [i_6]), (arr_21 [i_6 - 4])))))))));
    }
    var_25 ^= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_1))))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) ((3163617005923674803LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
}
