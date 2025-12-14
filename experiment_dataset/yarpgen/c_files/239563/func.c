/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239563
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(min((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_11)))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) : (2946664380405669822ULL)));
                        var_19 = ((/* implicit */long long int) ((1659248095041223474ULL) << (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (1659248095041223460ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_20 -= ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) var_3)))));
                        var_22 = ((/* implicit */int) ((unsigned long long int) ((short) var_9)));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)12450)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) var_5)))));
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1659248095041223474ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) 11630506105330252341ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12450))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned short) (((-(1))) > (((int) 15261572876915872379ULL))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned char) 10U)))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) ((short) (short)-28143)))));
                    }
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((signed char) 16787495978668328144ULL)), (((signed char) (signed char)-108))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (unsigned short)53075))) % (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)53061)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (max((0ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (+(4294967287U))))))));
                    var_28 = (-(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53080))) == (3185171196793679237ULL)))), (max((var_4), (((/* implicit */unsigned short) (unsigned char)81))))))));
                    var_29 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2751775751911372605LL)) : (11485085447225705390ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-107))) : (((((/* implicit */unsigned long long int) var_5)) % (6961658626483846223ULL))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) var_0);
    var_31 = ((/* implicit */unsigned char) var_15);
    var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U)))) : ((+(var_1)))))));
}
