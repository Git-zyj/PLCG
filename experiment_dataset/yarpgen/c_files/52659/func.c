/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52659
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
    var_13 = ((/* implicit */unsigned long long int) ((short) (short)32767));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */signed char) max((max((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 0U)) > (8ULL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((11821103342040041796ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) <= (((/* implicit */int) var_12)))))))));
                arr_7 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((-8343209151389016737LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-19309)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(signed char)10] [i_1])) + (((/* implicit */int) var_2))))) : ((-(6625640731669509819ULL))))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), ((~(1307788830))))))));
                arr_8 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) -7755621516460259803LL)))))))));
                var_15 = ((/* implicit */int) 11821103342040041796ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((11821103342040041797ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19308)) >> (max((arr_11 [12]), (((/* implicit */long long int) (_Bool)0)))))))));
                            arr_21 [i_2] = ((/* implicit */long long int) 11821103342040041772ULL);
                            var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)237)))));
                            arr_22 [i_4] [12] [12] [i_2] &= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)98)) < (((/* implicit */int) var_1)))) ? (((/* implicit */int) (unsigned char)195)) : (-1246261484)));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-19336)) + (((/* implicit */int) (signed char)-77)))) ^ (((int) arr_18 [i_2] [i_2] [i_4] [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)182))))), (((short) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)19313)) >= (((/* implicit */int) (_Bool)1)))))) + (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((~(((/* implicit */int) var_2)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_10 [4ULL] [i_3 - 1]))))))))));
            }
        } 
    } 
}
