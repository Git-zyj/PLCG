/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195229
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) min((arr_4 [i_2] [i_1] [i_1] [(short)20]), (((/* implicit */short) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                    var_12 ^= ((/* implicit */signed char) (~(((unsigned int) (~(1514083157146807710LL))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), ((+(((arr_0 [i_0]) ? (min((6671581512894536332ULL), (((/* implicit */unsigned long long int) (signed char)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */long long int) -1066145226)), (((((/* implicit */_Bool) -1814637097074390912LL)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (560126689793571050LL) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)-24119))))))))))));
        var_15 = ((/* implicit */short) (-((+(((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */signed char) arr_0 [i_0])))))))));
        var_16 = max(((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0])))))), (var_5));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_17 = ((/* implicit */short) var_7);
        var_18 ^= ((/* implicit */unsigned int) -1514083157146807710LL);
        arr_10 [i_3] = ((/* implicit */_Bool) (-(arr_7 [i_3])));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_10))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)23374)))), (((((/* implicit */_Bool) -497196777)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)36928))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-96))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        for (int i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((min((8286138565793885763ULL), (((/* implicit */unsigned long long int) arr_13 [i_4 - 1])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_5]), (((/* implicit */signed char) ((((/* implicit */_Bool) 8286138565793885770ULL)) || (((/* implicit */_Bool) var_2))))))))))))));
                var_21 = ((/* implicit */long long int) min((min((min((8286138565793885763ULL), (((/* implicit */unsigned long long int) arr_0 [i_4])))), (((/* implicit */unsigned long long int) min((4294967285U), (((/* implicit */unsigned int) var_3))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_16 [i_4] [i_4]))))) ? ((+(((/* implicit */int) arr_14 [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10))))))))));
            }
        } 
    } 
}
