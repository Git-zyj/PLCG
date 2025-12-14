/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54237
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (9ULL) : (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */int) ((((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) var_12)))))))) : ((-(((/* implicit */int) var_12)))));
    var_16 ^= ((/* implicit */long long int) (unsigned short)44320);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53249))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1)))))) << (((((((/* implicit */_Bool) ((unsigned long long int) 4075533898413535433ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [9ULL] [i_0]))) : (arr_2 [i_0] [i_0]))) - (18446744073709523266ULL)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_17 = ((int) min((((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (17593320779605188328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_4 [(signed char)1]) : (2147483647))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (797191071) : (arr_9 [i_2] [i_3] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (1512725572548430640ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3]))))))) ? (((min((arr_5 [i_3]), (((/* implicit */unsigned long long int) -657173604)))) - (((((/* implicit */_Bool) -1LL)) ? (7528905312568152031ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [i_0])))))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned short)15] [i_2] [i_3])))))));
                        var_19 -= ((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_7)))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (var_0)))) ? (((((/* implicit */_Bool) -1094309402)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_2 [4] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [1ULL] [(signed char)10] [i_2])))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((short) var_9)))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            arr_20 [i_4] [i_5] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) -1720242048)) ? (((/* implicit */unsigned long long int) 387491047)) : (var_10))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_5])) ? (((/* implicit */int) (short)-5912)) : (((/* implicit */int) (short)-13800))))))))));
            var_20 = ((/* implicit */unsigned char) (_Bool)0);
        }
        var_21 = ((/* implicit */int) ((((((/* implicit */int) ((unsigned char) -21))) <= (((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_4] [i_4])), (((unsigned short) arr_17 [i_4] [i_4])))))) : (((((/* implicit */_Bool) (unsigned char)47)) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */_Bool) arr_18 [i_4]);
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))))) ? (max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_9)))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
}
