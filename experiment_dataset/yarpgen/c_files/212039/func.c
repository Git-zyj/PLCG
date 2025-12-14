/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212039
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) ((((/* implicit */int) var_7)) > (var_14))))))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((int) (signed char)-1))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_5);
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_1 [i_0]), (((/* implicit */unsigned int) var_14)))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((7720721429372116419LL) - (7720721429372116399LL))))))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((long long int) var_1)), (min((arr_7 [i_0] [i_0] [i_2]), (arr_4 [i_2] [i_1] [i_2])))));
                    var_18 = ((/* implicit */unsigned char) var_4);
                    var_19 = max(((+(arr_7 [i_0] [i_0] [i_0]))), (((long long int) (_Bool)0)));
                    arr_9 [i_0] [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) & (902281165781502141ULL)))));
                    var_20 |= ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) arr_11 [i_3 + 3] [i_3 + 3])), (((((/* implicit */_Bool) var_14)) ? (arr_7 [i_3 + 3] [i_3] [i_3]) : (((/* implicit */long long int) var_0))))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (arr_15 [i_3] [i_3] [i_3] [i_3 + 2])));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) min((((((/* implicit */int) var_4)) != (((/* implicit */int) var_13)))), ((_Bool)1)))) % (((/* implicit */int) (_Bool)1))));
                    arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))));
                    arr_17 [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_8] [i_6])))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_13))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30720))) % (403716942U)))) : (((13ULL) >> (((2153785026U) - (2153785010U)))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~((((((_Bool)1) ? (((/* implicit */unsigned long long int) var_14)) : (arr_3 [i_7]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_24 [i_6] [i_7] [i_8])))))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned int) var_4)), (((unsigned int) var_10)))));
}
