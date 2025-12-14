/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54004
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] &= ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) (unsigned char)127))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)61035)) : (((/* implicit */int) (unsigned short)2047))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (-682473344) : (59094474)))) : (var_3)));
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (_Bool)1))));
                        var_13 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned long long int) ((_Bool) max(((short)-10066), (((/* implicit */short) (_Bool)1)))));
            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_9)), (var_10)))))));
            var_16 = ((/* implicit */unsigned long long int) (_Bool)0);
        }
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)1)), (var_2)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) 518037521U)))));
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)161)) << (((32767) - (32753)))))) ? (((/* implicit */int) min(((unsigned short)21941), (((/* implicit */unsigned short) (short)21821))))) : (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)193)))))), (max((((/* implicit */int) var_9)), (961726280)))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) (short)17943)) + (((/* implicit */int) (unsigned short)65535)))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */int) var_0)), (var_6))) : ((-(((/* implicit */int) (short)-17944)))))) - (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155))))))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned short)32767))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned short i_6 = 4; i_6 < 21; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (unsigned char)15);
                    var_21 = ((/* implicit */short) (unsigned char)254);
                    var_22 = ((/* implicit */signed char) (_Bool)1);
                    var_23 = ((/* implicit */int) ((long long int) min((max((((/* implicit */long long int) var_9)), (-7445996705144405318LL))), (((/* implicit */long long int) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    var_24 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)71));
                }
            } 
        } 
        var_25 = 8589934591ULL;
    }
    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        arr_20 [i_7] = ((/* implicit */unsigned long long int) var_5);
        var_26 = ((/* implicit */long long int) min((var_26), (((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (((long long int) (unsigned char)255)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-24084)) : (var_6)))) ? ((~(((/* implicit */int) (short)15)))) : ((+(((/* implicit */int) (unsigned char)10)))))))))));
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1))))));
}
