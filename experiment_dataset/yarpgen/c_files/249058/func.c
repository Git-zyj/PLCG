/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249058
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_10))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(arr_2 [i_0])));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) (-(-2762592208341203910LL)))) : ((+(arr_5 [11ULL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2762592208341203911LL)) && (((/* implicit */_Bool) var_4)))))))))) : (18446744073709551602ULL)));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((4097451162U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1]))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39148))) >= (2762592208341203909LL))))));
                    arr_13 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((short) var_9)), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))))), (var_6)));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_15 += ((/* implicit */int) (+(max((((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_4]))) : (-2762592208341203932LL))), (max((((/* implicit */long long int) arr_14 [(signed char)4])), (-2762592208341203885LL)))))));
        var_16 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 9223372036854775807LL)) != (12627790618638012144ULL))) ? ((~(-4414828320759324028LL))) : (arr_10 [i_4] [i_4] [i_4])));
    }
}
