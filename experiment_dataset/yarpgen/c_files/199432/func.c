/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199432
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)2)) - (((/* implicit */int) (unsigned short)5))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531)))))) > (((long long int) (unsigned short)57587))));
                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21206))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) < (var_6))))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8204202823660599666LL)))));
                arr_7 [i_1] = ((/* implicit */_Bool) (+(((-3682014622369911781LL) % (arr_3 [i_1])))));
                arr_8 [i_1] [i_1 + 2] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                var_19 = ((/* implicit */unsigned char) (unsigned short)65531);
            }
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) max((((((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))))) : (((arr_5 [i_0] [i_0] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
            arr_10 [i_1] = ((/* implicit */long long int) arr_5 [i_0] [i_1 - 1] [i_1]);
            var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((-9223372036854775807LL - 1LL))));
            var_21 = ((/* implicit */unsigned char) (signed char)-117);
        }
        for (short i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) -3460675423581512116LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33)))))) / (var_8))) * (min((0LL), (((/* implicit */long long int) (signed char)-126))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                        arr_22 [i_4] [i_3 + 2] [i_4] [i_3] = ((/* implicit */long long int) (~(((unsigned long long int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2900224898U)) ? (arr_17 [i_0] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), ((~(arr_3 [i_4])))))) || (((/* implicit */_Bool) arr_14 [i_5] [i_0] [i_4]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)8702))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 + 2] [i_3] [i_3])) <= (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3]))))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_0] [i_3])), (arr_17 [i_0] [i_3] [i_3 + 1] [i_3 + 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_0] [i_0] [i_3])))))))))));
        }
        var_25 = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65524)) >= (((/* implicit */int) (unsigned short)5))));
                        var_27 = ((/* implicit */unsigned int) max((((-1869118613971247610LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69))))), (((/* implicit */long long int) arr_16 [i_8]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */short) ((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((((/* implicit */_Bool) (short)32767)) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1337)))))));
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */long long int) ((/* implicit */int) ((21LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65260))))))) : (min((((/* implicit */long long int) (unsigned char)166)), (var_13))))) == (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (short)8680)) : (((/* implicit */int) (unsigned short)4)))), (((/* implicit */int) ((((/* implicit */long long int) var_6)) > (var_9)))))))));
        arr_32 [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 17933690466737017511ULL)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)-95))))));
    }
}
