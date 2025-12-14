/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32912
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)56);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)50)) ? (min((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)85)))))) : (max((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))))));
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) max(((signed char)85), (arr_0 [i_1]))))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)251))))), ((signed char)-31)))))));
        arr_7 [i_1] = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) var_6)), (11007153460298419788ULL))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 2])))), (((((/* implicit */_Bool) (signed char)68)) ? (arr_6 [i_1 - 1] [i_1]) : (arr_6 [i_1 - 1] [i_1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_12 [i_1 + 2] [i_2 + 1] [i_2] [i_3 + 1] = (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)7])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (signed char)103))))), (((unsigned long long int) (signed char)47)))));
                    arr_13 [i_1] [i_1] [(unsigned char)9] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_9 [i_3 + 1] [i_2] [i_1]), ((unsigned char)0)))) | (((/* implicit */int) arr_9 [i_1] [i_2] [i_3 - 2]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) < (7439590613411131825ULL))))) & (arr_11 [i_3] [i_3] [i_2 - 2] [i_1]))))));
                }
            } 
        } 
    }
    var_15 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)192), (var_12))))) != (((unsigned long long int) (unsigned char)112))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)103))));
                    var_17 = min((((((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6])) ? (arr_17 [i_4]) : (330690931495087697ULL))) & (max((((/* implicit */unsigned long long int) (unsigned char)248)), (arr_19 [i_5]))))), (((/* implicit */unsigned long long int) ((((arr_18 [i_6 - 1] [i_5] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)143)) - (((/* implicit */int) (signed char)-104)))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6 + 1]))))), ((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)15)), ((unsigned char)148)))))))))));
                }
            } 
        } 
    } 
}
