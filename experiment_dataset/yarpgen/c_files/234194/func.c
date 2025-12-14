/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234194
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
    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)4702)))), (4294967295U)))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1))) : (((/* implicit */unsigned long long int) var_10)))));
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) (unsigned short)3))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4])) ? (((/* implicit */unsigned long long int) min((-545204084), (((/* implicit */int) (unsigned char)228))))) : (min((min((var_1), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (unsigned char)154))))));
        var_19 = ((/* implicit */unsigned short) min((max((((/* implicit */int) ((unsigned char) 9223372036854775807LL))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */int) (unsigned char)244)) | (((/* implicit */int) (unsigned short)8))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((int) (!((_Bool)1)))) : (min((min((arr_0 [i_0] [i_0 - 2]), (var_15))), (((/* implicit */int) arr_1 [i_0 + 2]))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_21 ^= ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)27798)) : (((/* implicit */int) var_13)));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_4))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (7255373344334220683ULL)))) ? (567453553048682496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (arr_7 [i_0] [0] [(unsigned char)14] [i_5])));
            var_25 = ((/* implicit */unsigned short) (~(7U)));
        }
        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_9 [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned short)1058))))))))));
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)5))));
            arr_21 [i_0] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_1 [i_7]))))) ? (arr_8 [i_0] [i_0] [i_7 + 1]) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)62061)) : (((/* implicit */int) (_Bool)1)))))) << (((min((((/* implicit */unsigned long long int) 4294967295U)), (134217727ULL))) - (134217727ULL)))));
            var_29 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_7 + 3])), ((+(((/* implicit */int) var_9))))));
        }
        arr_25 [i_0 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0]))), (arr_12 [i_0 - 3] [i_0] [16LL] [i_0]))))));
    }
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (max((max((((/* implicit */unsigned int) (unsigned short)127)), (1U))), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)16383)))))))));
    var_31 = ((/* implicit */int) 18446744073709551615ULL);
}
