/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248457
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((100448945005768138LL) % (arr_0 [(_Bool)1]))) : (((/* implicit */long long int) -625486107)))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (-(-1LL)));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_1 [(short)9]) : (arr_1 [i_2]))) >= ((-(arr_6 [i_1] [i_2])))))) <= (((((/* implicit */_Bool) 8396740380864679503LL)) ? (((/* implicit */int) (short)-924)) : (((/* implicit */int) (short)-17976))))));
            arr_9 [i_1] [i_2] = ((/* implicit */_Bool) arr_1 [i_2]);
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_13 [i_1] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)17975)) ? (((/* implicit */long long int) 1913206095U)) : (8396740380864679503LL)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_1] [i_4] = ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)17976))) : (-2351482794885941982LL))), (((/* implicit */long long int) (signed char)34))));
            var_24 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 2])))) >> (((((min((((/* implicit */long long int) var_17)), (8396740380864679503LL))) / (((/* implicit */long long int) ((/* implicit */int) (short)17970))))) + (29639LL)))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_5) ? (((/* implicit */long long int) -1451091447)) : (var_8))), (((/* implicit */long long int) -1263746916))))) ? (((/* implicit */long long int) ((/* implicit */int) ((7045605698217462205LL) < (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) : (((((min((((/* implicit */long long int) var_12)), (arr_1 [i_1 + 2]))) + (9223372036854775807LL))) >> (((max((arr_8 [i_1] [i_4]), (((/* implicit */unsigned int) var_12)))) - (493283601U)))))));
        }
    }
    var_26 = ((/* implicit */long long int) var_10);
}
