/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27412
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) (~(7899642863807857931ULL)));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_4))))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (14206404476955468496ULL))) * ((~(var_4))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -897151325424964553LL)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_18 += ((/* implicit */unsigned char) ((-1865011564) != (((int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_14)))))));
            arr_9 [i_0] [i_2 + 1] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_1))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */long long int) (-((~(((/* implicit */int) ((short) arr_6 [i_3] [i_3] [i_3])))))));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_18 [i_3] [6ULL] [i_5] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((10313363934714541633ULL) <= (((/* implicit */unsigned long long int) -1555206129)))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_3]);
                            arr_22 [i_0] [i_3] [i_4 + 4] [i_5] [i_6] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_7] [i_7] [i_4] [i_0] [i_3] [i_7] = ((((/* implicit */_Bool) ((arr_14 [i_4 + 1] [i_3 - 2] [i_4 + 3]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) (!(arr_14 [i_4 + 3] [i_3 + 3] [1ULL])))) : (((/* implicit */int) max((arr_14 [i_4 + 1] [i_3 - 2] [i_4]), (arr_14 [i_4 + 3] [i_3 + 3] [i_4])))));
                            var_19 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            arr_26 [i_0] [i_3] [i_3] [4LL] [(_Bool)1] [i_5] [i_7] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (((-(arr_7 [i_0] [i_7]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_4]))) >= (9223372036854775806LL))))))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) 430683685)), (8508241555993307192ULL)))));
                    }
                } 
            } 
            var_20 ^= ((/* implicit */long long int) var_1);
        }
    }
    var_21 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 3) 
        {
            {
                var_22 = ((/* implicit */short) ((unsigned long long int) arr_29 [i_8] [i_9 + 4]));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) var_3)), (var_5))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */_Bool) (short)7663)) && (((/* implicit */_Bool) var_5)))))));
    var_25 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) var_0)))));
}
