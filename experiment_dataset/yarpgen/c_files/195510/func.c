/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195510
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) ((short) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (unsigned char)3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((8264953904208187710LL) > (((/* implicit */long long int) -399413212))));
                var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (8264953904208187710LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_2 + 1] [i_1] [i_1] [i_3 + 1] [i_4]))))), (((-8264953904208187738LL) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                                arr_19 [i_3] = ((/* implicit */long long int) ((unsigned char) 18446744073709551599ULL));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_14 [10U] [i_2 - 3] [i_2] [i_3 - 1]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_24 [i_1] |= (~((-(((/* implicit */int) arr_21 [i_0] [i_1] [i_5] [i_6])))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_21 [i_0] [6ULL] [i_5] [i_6]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_35 [i_7] = ((/* implicit */unsigned char) arr_30 [i_7] [i_9]);
                    arr_36 [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) 4294967292U)) ^ (-8264953904208187710LL))) ^ (((/* implicit */long long int) ((unsigned int) (-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) arr_31 [i_7])) : (((/* implicit */int) ((unsigned char) -1LL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        arr_40 [(unsigned char)16] [i_8] [i_8] [9LL] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (8264953904208187709LL)))) && (((7387972498347218094LL) != (((/* implicit */long long int) arr_25 [i_7]))))));
                        var_23 -= ((/* implicit */unsigned short) var_5);
                        arr_41 [i_7] [i_8] [16LL] [i_10] [i_9] [i_7] = ((/* implicit */_Bool) min((arr_33 [i_7] [(signed char)13] [i_7]), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_0))))));
                    }
                    arr_42 [i_7] = ((/* implicit */signed char) -8264953904208187696LL);
                    var_24 -= ((/* implicit */short) ((((/* implicit */long long int) ((arr_33 [i_7] [i_7] [i_7]) - (-1)))) == (((((/* implicit */long long int) arr_33 [i_7] [(_Bool)1] [(_Bool)1])) / (8264953904208187706LL)))));
                }
            } 
        } 
    } 
}
