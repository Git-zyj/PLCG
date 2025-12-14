/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215730
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
    var_18 &= ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 14269047086161610368ULL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_5 [i_0 - 3] [i_1] [i_0 - 3])))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) (+(((arr_5 [i_0 + 2] [i_0] [i_0 - 2]) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)101)) + (((/* implicit */int) (unsigned char)5)))))))));
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0 - 3] [(_Bool)1] [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2] [(signed char)10] [i_2])) : (((/* implicit */int) (unsigned char)134)))) : (((((/* implicit */int) arr_3 [i_0 - 3] [1ULL] [i_2 - 3])) / (((/* implicit */int) var_2))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [(unsigned char)8]))))) ? (((/* implicit */int) arr_13 [i_0] [i_4])) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) - ((+(((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1]))))));
                    var_22 += ((/* implicit */_Bool) max((((14269047086161610371ULL) >> (((((/* implicit */int) arr_10 [(_Bool)1])) - (217))))), (((/* implicit */unsigned long long int) var_12))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                var_23 ^= ((/* implicit */unsigned char) 26ULL);
                var_24 = arr_19 [(unsigned char)7] [i_6];
                var_25 = max((min((((/* implicit */unsigned long long int) ((arr_17 [i_6]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217)))))), ((((_Bool)0) ? (11133244163855305814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) var_15)));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) != ((~(((/* implicit */int) var_15)))))))));
}
