/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242608
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (-(7788921985777104047LL)));
                var_20 = ((/* implicit */unsigned long long int) 7788921985777104047LL);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_17);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_8 [i_2] = ((((/* implicit */_Bool) 4756607007199342339ULL)) ? (13690137066510209276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))));
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            arr_11 [i_3] = (unsigned char)192;
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) > (max((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_3 - 1]))))));
        }
        for (int i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            arr_14 [i_2] [20ULL] [20ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2637027421647160596LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24089))) : (4756607007199342339ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)144)) >= (((/* implicit */int) (unsigned short)0)))))))) ? (((((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned char)85)))) & (((arr_9 [i_4] [8ULL] [8ULL]) ? (arr_7 [i_2]) : (arr_7 [i_2]))))) : (((/* implicit */int) arr_9 [i_2] [i_2] [(_Bool)1]))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-39)) ? (7788921985777104047LL) : (3529056953629023327LL))))));
            var_24 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24014)) ? (((/* implicit */int) (unsigned short)0)) : (-1)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-5420))))), (var_10)));
            arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2637027421647160616LL)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-5414)))) || (((/* implicit */_Bool) (unsigned short)10260))))) : (((/* implicit */int) (unsigned char)0))));
        }
        arr_16 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)31379)), (3903687102U)));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_3))));
        arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -426433290)), ((~(4147303384U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_2]) > (((/* implicit */int) var_6)))))) / ((+(arr_5 [i_2])))))));
    }
    for (short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_26 += ((/* implicit */_Bool) 279223176896970752ULL);
                    arr_25 [19U] [i_7] [i_6 + 1] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1157026986168597867ULL) : (7240500542190714290ULL)))) ? ((-(((/* implicit */int) (short)-21188)))) : ((+(((/* implicit */int) arr_13 [i_5] [(_Bool)1])))))), (((/* implicit */int) var_8))));
                    var_27 = var_11;
                    arr_26 [i_5] [(unsigned char)19] = ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_22 [i_7] [i_6 - 2] [i_5]))))))) ? (max((7814737805425327327ULL), (((/* implicit */unsigned long long int) (signed char)7)))) : (arr_12 [i_5]));
                }
            } 
        } 
        var_28 = ((/* implicit */short) (+(((1593578972U) << (((-1129939669) + (1129939681)))))));
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_19 [i_8] [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-30853))))) ^ (((((/* implicit */_Bool) arr_20 [i_8])) ? (arr_12 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) 7788921985777104052LL))));
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-1129939669) + (2147483647))) << (((((/* implicit */int) (unsigned short)10262)) - (10262)))))) ? ((-(17142103510368222288ULL))) : (((/* implicit */unsigned long long int) (~(var_14))))));
        var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (max((((((/* implicit */unsigned long long int) 4059998811975558646LL)) / (11797665571453492761ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16370081820440875418ULL)) ? (((/* implicit */int) (unsigned short)51805)) : (((/* implicit */int) (unsigned char)198)))))))));
    }
}
