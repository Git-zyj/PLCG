/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247112
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -1015751952))))))), ((+((-(((/* implicit */int) var_7)))))))))));
    var_11 += ((/* implicit */short) ((min(((~(14100109143058645861ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_4 [i_2]))))), (((min((4346634930650905735ULL), (((/* implicit */unsigned long long int) arr_0 [i_2])))) % (((14100109143058645854ULL) ^ (var_8)))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_1 [i_3 - 1] [i_1]);
                        var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(arr_5 [i_2])))), (min((((/* implicit */unsigned int) arr_0 [i_1])), (2750873313U)))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((max((-1015751952), (((/* implicit */int) var_3)))), (arr_7 [i_1]))) % (((((/* implicit */int) arr_0 [i_3 + 1])) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) == (((/* implicit */int) (unsigned short)65523)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_5] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                                var_13 = ((/* implicit */unsigned char) ((max((1015751951), (arr_17 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)62006)) : (((/* implicit */int) (short)22134))))));
                                var_14 &= (+((-(((/* implicit */int) ((unsigned short) 1544093957U))))));
                                var_15 *= ((/* implicit */_Bool) arr_15 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
