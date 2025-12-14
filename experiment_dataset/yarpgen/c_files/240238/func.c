/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240238
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
    var_11 = ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33769))) : (min((((/* implicit */unsigned long long int) ((long long int) (signed char)-92))), (17583596109824ULL))));
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) 8679568443683454832ULL)))));
    var_13 *= 18446726490113441780ULL;
    var_14 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-4))))))));
            var_17 = ((/* implicit */int) ((max((8679568443683454832ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 1])))) + ((-(var_4)))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_2), (((/* implicit */long long int) 284855446U))))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) / (18446726490113441783ULL))) < (arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) min((arr_1 [5LL] [i_1]), ((signed char)105)))) == (((/* implicit */int) arr_2 [i_0])))))));
        }
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((unsigned short) 17583596109842ULL)), (((/* implicit */unsigned short) arr_1 [i_0] [14LL])))))));
    }
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        var_20 *= ((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_3))), (((((/* implicit */_Bool) 8679568443683454832ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))) : (var_9)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)142)), (var_5))) : (((/* implicit */unsigned long long int) ((-8231364755232667903LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1])))))))) - (115ULL)))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_15 [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)113);
                    arr_16 [i_2 + 1] [i_3] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */int) ((_Bool) 17583596109849ULL))) | (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                    arr_17 [(signed char)3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_2 - 2]))) : (17583596109824ULL))), (((/* implicit */unsigned long long int) ((long long int) (signed char)110)))));
                }
            } 
        } 
    }
}
