/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27762
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12937)) | (((((/* implicit */int) ((9223372036854775807LL) >= (9223372036854775807LL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39246)))))))));
                            var_19 = ((((/* implicit */int) (short)25443)) | (((/* implicit */int) (_Bool)1)));
                            arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)25443))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) (short)32767);
                arr_12 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */unsigned int) (~(var_16)))) <= ((+(var_0)))))), (((short) ((long long int) (short)-25444)))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (short)25444)))))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((5008782009585564784ULL), (((/* implicit */unsigned long long int) 3670299304577828222LL)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                var_23 = ((/* implicit */long long int) var_16);
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)-30729)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 3670299304577828222LL))))))))));
                                var_25 = ((/* implicit */long long int) var_5);
                                arr_23 [i_4] [i_5] [i_4] [10ULL] [i_4] [12LL] [1LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_7)))))) ? ((+(var_14))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 6096898673606320049ULL)))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((long long int) var_12)), (((/* implicit */long long int) (unsigned char)75)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((2772875825368443607LL) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
