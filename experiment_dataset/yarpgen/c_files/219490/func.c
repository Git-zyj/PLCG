/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219490
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (0U)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_4)))) + (((((/* implicit */_Bool) 15854655121687570710ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (arr_0 [(signed char)11])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+((-(var_8)))));
        arr_4 [(unsigned char)6] &= ((/* implicit */unsigned short) 3485590094U);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) var_2);
                        arr_16 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned char)189), ((unsigned char)10))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))))))))) ^ (arr_15 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [(unsigned short)3])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) (-(((/* implicit */int) ((15854655121687570710ULL) >= (((/* implicit */unsigned long long int) 4493828824275597811LL)))))))) ? (arr_0 [i_1]) : (min((((/* implicit */unsigned long long int) (unsigned char)10)), (((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned long long int) 6750372063243941898LL)) : (arr_8 [i_4] [i_2] [i_3])))))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - ((+(3851871009543618761ULL)))));
                        }
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(arr_12 [i_1]))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)173))));
    /* LoopNest 3 */
    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (int i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((761806205) <= (((/* implicit */int) (unsigned char)73))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_20 [(unsigned char)1] [(unsigned char)1])), (15824297843493166738ULL))), (((/* implicit */unsigned long long int) ((130560LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))))))) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) 1855785973)), (var_4)))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)61)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_25 [(_Bool)0] [(_Bool)0] [5U] [i_6])))))))))));
                }
            } 
        } 
    } 
    var_19 &= 6690402275834987595ULL;
}
