/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20743
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)106))))) : (((/* implicit */int) min((var_6), (((/* implicit */signed char) var_7)))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min(((+((+(19U))))), (((/* implicit */unsigned int) ((signed char) var_4))))))));
        arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_12)))));
    }
    for (long long int i_1 = 4; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_21 |= ((((/* implicit */_Bool) ((signed char) ((signed char) arr_6 [i_3] [i_2])))) && (((/* implicit */_Bool) (unsigned short)672)));
                        arr_16 [i_1] [i_2] [i_2] [i_4] [i_3] [i_2 + 2] = ((/* implicit */long long int) arr_10 [i_4] [i_3 + 3] [i_2]);
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) var_4))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 2]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (signed char i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    var_23 += ((/* implicit */signed char) var_1);
                    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)18261)), (19U)))) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) ((_Bool) arr_11 [i_1] [i_1] [(unsigned short)4] [i_1]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_1 - 2] [i_5] [i_1 - 2] [i_6])) : (((/* implicit */int) var_6))))) < (max((0U), (((/* implicit */unsigned int) var_16)))))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((3303376675U), (((/* implicit */unsigned int) (signed char)0)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)106)) >> (((/* implicit */int) var_13))))))));
        var_26 |= ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) min(((unsigned short)30970), (((/* implicit */unsigned short) var_2))))), (arr_9 [i_7 + 1])))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            {
                arr_30 [i_9] = ((/* implicit */short) max((((long long int) ((var_16) && (var_7)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_8] [i_9] [i_9])))), (((/* implicit */int) ((((/* implicit */int) (signed char)48)) <= (((/* implicit */int) var_15))))))))));
                arr_31 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_16) ? (arr_9 [i_8]) : (((/* implicit */long long int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_29 [i_9])));
            }
        } 
    } 
}
