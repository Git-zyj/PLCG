/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192488
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
    var_17 = ((/* implicit */short) (~((+(var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [(signed char)12]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 997661585100499871LL))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_4);
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : ((-(var_10)))));
    }
    var_18 ^= ((/* implicit */unsigned char) var_15);
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (-(11361263818936987650ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
            arr_13 [i_2] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2808372377U))))))));
        }
        var_20 = ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1189762134190255988LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1]))) : (5306689755487474131LL)))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_3] [i_3 - 1]), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_15 [i_3 - 1])))) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 11952921)), (arr_2 [i_3 - 2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((long long int) var_2))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        arr_26 [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) arr_9 [i_3] [i_4]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (1486594919U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4 + 2] [i_3 - 1]))) : (arr_22 [i_4] [i_4 + 2])))));
                        arr_27 [i_3] [i_6] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(14684350378156965721ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_6])) ? (var_7) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1486594919U))))))));
                        var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -25LL)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)116)))) ^ ((~(((/* implicit */int) ((signed char) arr_18 [i_6] [i_5] [i_4])))))));
                    }
                } 
            } 
        } 
        arr_28 [i_3 - 1] = ((/* implicit */short) ((((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_25 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [6] [i_3]), (var_6))))))) || (((/* implicit */_Bool) 1978542816U))));
    }
    /* LoopNest 3 */
    for (long long int i_7 = 3; i_7 < 12; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (min((((/* implicit */short) ((((/* implicit */unsigned long long int) (+(3365556464179801416LL)))) <= (max((11049538013703236239ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))), (((short) arr_30 [i_7 + 3]))))));
                    arr_38 [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) 4095));
                    var_23 += ((/* implicit */unsigned char) min((2686302863U), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_29 [i_7] [i_7]))))))))));
                }
            } 
        } 
    } 
}
