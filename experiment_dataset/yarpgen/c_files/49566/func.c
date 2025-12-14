/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49566
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) + (((/* implicit */int) (unsigned char)254))))) && (((/* implicit */_Bool) (unsigned short)21539))))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_11 = ((/* implicit */short) ((unsigned char) ((_Bool) arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */int) (unsigned short)43867)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-10444))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)5))));
                    arr_8 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned char) var_9)), (max(((unsigned char)227), (((/* implicit */unsigned char) arr_0 [i_0])))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 3] [i_2 - 1]))))));
                }
            } 
        } 
        arr_10 [i_0] [(unsigned char)5] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)240))))), (arr_1 [(unsigned short)8])));
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned short) ((arr_4 [i_3] [i_3]) || ((!(arr_4 [(short)23] [i_3])))));
        arr_16 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)233))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65074))))));
        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) min((((/* implicit */short) (unsigned char)164)), ((short)32744)))))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_14 *= ((unsigned char) ((unsigned char) max((((/* implicit */unsigned short) arr_4 [i_4] [i_4])), (arr_5 [(_Bool)1] [(_Bool)1]))));
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) % (((/* implicit */int) var_1))))) ? ((+(((((/* implicit */int) arr_1 [i_4])) * (((/* implicit */int) var_2)))))) : ((((_Bool)1) ? (((/* implicit */int) (short)10451)) : (((/* implicit */int) (unsigned char)249))))));
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)141))));
        var_16 = ((/* implicit */_Bool) max((var_16), (var_9)));
        arr_21 [(unsigned short)16] [(unsigned char)5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) arr_6 [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */int) arr_5 [i_4] [i_4])))), (((((/* implicit */_Bool) (short)13057)) ? (((/* implicit */int) (unsigned short)21015)) : (((/* implicit */int) (unsigned char)121))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 7; i_6 += 2) 
        {
            {
                var_17 ^= var_8;
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-1)))) & (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (short)-22124)) : (((/* implicit */int) (unsigned char)250))))))));
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)51)))))), ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_0))))))));
                arr_28 [i_5] [i_6 - 2] = ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65516)) < (((/* implicit */int) var_0))))), (var_1))));
}
