/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229373
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)57840)) * (((/* implicit */int) ((-5288701026513018017LL) > (7887583172918876922LL))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), ((unsigned char)224)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31294)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)22812)) << (((/* implicit */int) (unsigned short)0)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_17)))))))))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((((/* implicit */_Bool) min(((unsigned short)7), (((/* implicit */unsigned short) (short)-6563))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [8U])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (short)-2276))))) : (((((/* implicit */long long int) ((/* implicit */int) var_18))) / (-1LL))))))))));
            }
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                arr_9 [i_0] [(unsigned char)4] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) (signed char)35))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)21636)) : (((/* implicit */int) var_17)))) : ((+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) arr_3 [(unsigned char)0] [(unsigned char)0])) | (((/* implicit */int) var_18))))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (short)17594)))))) : ((~(((/* implicit */int) (short)12334))))));
                arr_10 [i_3] [i_1 - 2] [i_0] [(short)0] &= ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) arr_3 [i_3 - 1] [i_1 + 1]))), ((~((-(((/* implicit */int) arr_1 [i_3 - 1]))))))));
            }
            var_24 = ((/* implicit */unsigned short) var_9);
        }
        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_25 = ((unsigned char) (signed char)-107);
            var_26 = ((/* implicit */unsigned int) (unsigned short)21941);
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((4398046445568LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17658)))))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        }
    }
    var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (319416229491548781LL)));
    var_29 &= ((/* implicit */_Bool) var_9);
    var_30 = ((/* implicit */unsigned short) (!(((((/* implicit */int) ((((/* implicit */int) (unsigned short)1981)) < (((/* implicit */int) (unsigned short)28845))))) < (((/* implicit */int) (unsigned char)249))))));
}
