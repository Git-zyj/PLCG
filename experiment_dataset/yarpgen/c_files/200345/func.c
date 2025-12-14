/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200345
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
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((((/* implicit */unsigned int) 1456494443)) > (var_12))), (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))))))));
    var_20 = 1456494443;
    var_21 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))), (min((var_14), (((/* implicit */unsigned int) -1456494444)))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_23 += ((/* implicit */unsigned long long int) (((-(arr_2 [i_0]))) > (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [4LL] [i_1]))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [(signed char)9])) ? ((~(((((/* implicit */int) var_16)) ^ (((/* implicit */int) (short)32762)))))) : (-1456494443)));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0]))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_4 [i_0]))))));
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_10 [(signed char)15] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1616999080274180845LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))))) ^ (min((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_18)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3])) <= (min((1456494436), (var_1))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -6475288452892797375LL)) ? (((/* implicit */unsigned long long int) -1456494437)) : (6637962790247704770ULL))))) > (var_11)));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max(((-(var_11))), ((((~(((/* implicit */int) var_5)))) | (((/* implicit */int) ((signed char) 6475288452892797362LL))))))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((arr_0 [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)22332)) ? (1540254212U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
                            var_29 = ((/* implicit */short) (+(729925864)));
                            var_30 = ((/* implicit */unsigned int) ((short) max(((~(((/* implicit */int) arr_5 [i_0] [i_4] [i_4])))), (min((((/* implicit */int) (short)-22333)), (var_11))))));
                            var_31 = ((/* implicit */short) arr_0 [i_1] [(signed char)2]);
                            var_32 = ((((/* implicit */_Bool) 2047)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) : (-21187399439358946LL));
                        }
                    } 
                } 
            }
        } 
    } 
}
