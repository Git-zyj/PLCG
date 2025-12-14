/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192065
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((long long int) ((arr_0 [i_0] [i_0]) << (((var_5) + (6866664047791474151LL))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_10 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) max((var_8), (((/* implicit */unsigned short) var_7)))))) | (min((var_5), (((/* implicit */long long int) var_3))))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((var_3) - (1070380825U))), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0] [i_0] [i_0])))))) == (var_9)));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) / (max((var_2), (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]))))));
        }
        for (signed char i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3224586482U)) % (max((2995809410712582084ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            arr_12 [i_0] [i_2 - 2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)3)) << (((((/* implicit */int) (unsigned short)27834)) - (27806))))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-28)) == (((/* implicit */int) (unsigned char)100))))), (max(((signed char)114), (((/* implicit */signed char) (_Bool)1)))))))));
        }
        for (signed char i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_11 = ((/* implicit */_Bool) ((unsigned char) max(((unsigned char)33), ((unsigned char)17))));
            arr_15 [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0]);
            var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 2124839702)), (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3 - 2]))))));
            var_13 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)23540)) - (((/* implicit */int) var_8)))))))) == (max((arr_4 [i_3 + 2] [i_0]), (((/* implicit */unsigned long long int) var_3))))));
        }
        for (signed char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((unsigned char) var_7))))), (((/* implicit */int) ((_Bool) (unsigned char)141))))))));
            arr_18 [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_4 - 1])))))) % (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
            var_15 += ((/* implicit */unsigned char) ((unsigned short) arr_13 [i_4 - 1] [i_4 + 2] [i_0]));
        }
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_3))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) / (-1431550276))))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) & (arr_20 [i_5]))) << (((/* implicit */int) (!(((/* implicit */_Bool) 13865322555593162609ULL)))))));
    }
    var_19 = ((/* implicit */signed char) var_4);
    var_20 = ((/* implicit */int) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)212))))));
}
