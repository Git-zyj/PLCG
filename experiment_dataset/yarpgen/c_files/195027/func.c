/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195027
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
    var_18 = min((1254988480U), (3984083762U));
    var_19 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3707699418U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_12)))))) : (var_5))), (var_17)));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ^ (((3478464441187211717ULL) ^ (((/* implicit */unsigned long long int) var_17))))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((int) (unsigned short)57855))) ? (((unsigned int) var_13)) : (4194303U))) : (((/* implicit */unsigned int) arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(arr_7 [i_0] [0U] [i_1 + 1])));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)31550)), (arr_1 [i_3])))) ? (((((/* implicit */_Bool) -909770760)) ? (((/* implicit */int) (short)-14591)) : (arr_4 [i_0]))) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned short)19533)) : (-1981476129)))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) 13997840275793222321ULL);
                            var_24 = ((/* implicit */int) max((((unsigned long long int) ((var_17) == (((/* implicit */long long int) 1244328233))))), (((/* implicit */unsigned long long int) max((arr_7 [i_1 - 1] [10ULL] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                            var_25 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [8ULL] [i_1 - 1])) ? (((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])) : (3061044365U))));
                            var_26 = ((unsigned long long int) var_0);
                        }
                        for (int i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_1] [i_5 - 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3U)) ? (((((/* implicit */int) var_15)) >> (((((/* implicit */int) (unsigned char)130)) - (101))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 3997900143U)))) || (((/* implicit */_Bool) ((var_17) | (2262422787696744959LL)))))))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) ((8734333707109105067LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))))))) ? (2828396780U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)1]))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            arr_19 [i_1] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 7U))) ? (15284825372319866307ULL) : ((-(45071664336615703ULL)))));
                            arr_20 [i_0] [i_1] [i_3] [i_0] [12U] [10U] = ((/* implicit */long long int) arr_17 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1] [14U]);
                        }
                        var_28 ^= ((/* implicit */unsigned short) -3521612945577784873LL);
                    }
                    var_29 |= ((/* implicit */signed char) 843300655879843245LL);
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])) > (var_13)))), (((int) arr_15 [i_2] [(unsigned char)0] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])))))));
                }
            } 
        } 
    }
}
