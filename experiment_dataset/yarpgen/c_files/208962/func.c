/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208962
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) 8192LL)) ? (12779801113355969617ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((((/* implicit */int) arr_6 [i_0] [i_1])) - (4493))))))));
                                var_17 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)25783)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 1])))), (((-1578815726) % (((/* implicit */int) (unsigned char)17)))));
                                var_18 = ((/* implicit */unsigned char) (((((((+(arr_3 [i_1]))) + (9223372036854775807LL))) << (min((var_0), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_1] [i_3] [i_4])))))) > (((/* implicit */long long int) (~(((/* implicit */int) (short)15943)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_1] [i_1 + 2] [i_1 + 1] [i_0])) >> (((((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_1 + 3] [i_2])) - (203))))) < (var_11)));
                        var_20 = min((((/* implicit */long long int) ((unsigned short) (unsigned char)255))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) & (14680064LL))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 7; i_6 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_0 [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_0 [i_6 + 3] [i_6]))));
        var_22 = ((/* implicit */short) (unsigned char)243);
        var_23 = ((/* implicit */short) arr_12 [i_6] [i_6] [i_6] [(_Bool)1]);
        var_24 = ((/* implicit */unsigned short) ((((-17592186044416LL) <= (((/* implicit */long long int) -1326553977)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17862))) : (((var_2) ^ (((/* implicit */unsigned long long int) 211948521))))));
    }
}
