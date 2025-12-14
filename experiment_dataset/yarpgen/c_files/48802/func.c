/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48802
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-118)) / (((/* implicit */int) (unsigned short)24473)))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned char)158))))))) == (min((min((var_11), (((/* implicit */long long int) arr_5 [i_0] [i_0])))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)98)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_2)), (arr_0 [i_0]))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == ((~(17683218740063260277ULL))))))));
                var_15 = ((/* implicit */long long int) max((var_15), (((((max((arr_2 [(signed char)16]), (((/* implicit */long long int) 452574570U)))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((~(14285448180073161492ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2]))))) - (4161295893636390092ULL)))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) min((931564970U), (((/* implicit */unsigned int) (unsigned short)255))))) - (max((-1580861925272191138LL), (-2294338995401036132LL))))) : ((-(((-3193024821012690349LL) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (3222839699261553554LL) : (0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_3]))) : (-6405892863411871721LL))), (((((/* implicit */_Bool) ((arr_0 [(signed char)5]) & (9223372036854775807LL)))) ? (min((3825009053920490741LL), (((/* implicit */long long int) var_1)))) : (max((var_7), (((/* implicit */long long int) arr_3 [i_2] [i_3 + 2] [i_3]))))))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 3; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_22 [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3842392725U)) ? (-3825009053920490742LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33752)))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_6] [i_2] [i_6] [i_2]))) - (1774312408993677337ULL)))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_17 [i_5 + 1] [i_6 + 2] [i_6] [i_6] [i_6] [i_6 + 3]), (arr_17 [i_5 + 2] [i_6 + 3] [i_6] [i_6] [i_6] [i_6 + 1])))))))));
                                arr_23 [i_2] [i_3] [(signed char)3] [i_5] [i_6] [i_3 - 1] = ((/* implicit */signed char) -1LL);
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */long long int) min((max((((/* implicit */int) arr_5 [i_3 - 1] [i_2])), (((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [(unsigned char)15] [i_2])) + (((/* implicit */int) var_9)))))), (((/* implicit */int) (unsigned char)158))));
            }
        } 
    } 
}
